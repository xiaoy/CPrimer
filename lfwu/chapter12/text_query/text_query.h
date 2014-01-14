#ifndef TEXT_QUERY_
#define TEXT_QUERY_
#include <string>
#include <memory>
#include <fstream>
#include <vector>
#include <map>
#include <set>

class TextQueryResult;
class TextQuery{
public:
    typedef std::vector<std::string>::size_type vsize;
    TextQuery(std::fstream& f);
    const TextQueryResult Query(std::string& word);
private:
    std::shared_ptr<std::vector<std::string>> file_ptr_;
    std::map<std::string, std::shared_ptr<std::set<vsize>>> words_;
};
#endif
