#include "text_query.h"
#include "text_query_result.h"
#include <sstream>
using namespace std;

TextQuery::TextQuery(fstream& f) : file_ptr_(new vector<string>){
    if(f == nullptr) {
        return;
    }
    string line;
    while(getline(f, line)) {
        file_ptr_->push_back(line);
        vsize n = file_ptr_->size() - 1;
        istringstream is(line);
        string word;
        while(is >> word) {
            auto& line_nums = words_[word];
            if(line_nums == nullptr) {
                line_nums.reset(new set<vsize>());
            }
            words_[word]->insert(n);
        }
    }
}

const TextQueryResult TextQuery::Query(string& word) {
    auto loc = words_.find(word);
    if(loc == words_.end()) {
        static shared_ptr<set<vsize>> nodata{new set<vsize>};
        return TextQueryResult(word, file_ptr_, nodata);
    }
    return TextQueryResult(word, file_ptr_, loc->second);
}
