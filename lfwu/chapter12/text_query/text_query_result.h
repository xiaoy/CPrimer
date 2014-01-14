#ifndef TEXT_QUERY_RESULT_
#define TEXT_QUERY_RESULT_

#include <iostream>
#include <string>
#include <vector>
#include <memory>
#include <set>

class TextQueryResult{
public:
    typedef std::vector<std::string>::size_type vsize;
    friend std::ostream& print(std::ostream& os, const TextQueryResult& tqr);
    TextQueryResult(std::string sought,
                    std::shared_ptr<std::vector<std::string>> lines,
                    std::shared_ptr<std::set<vsize>> lineNums);
private:
    std::string sought_;
    std::shared_ptr<std::vector<std::string>> lines_;
    std::shared_ptr<std::set<vsize>> lines_num_;
};

#endif
