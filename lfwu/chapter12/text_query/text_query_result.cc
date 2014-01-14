#include "text_query_result.h"
#include "util.h"

using namespace std;

TextQueryResult::TextQueryResult(string s,
                                 shared_ptr<vector<string>> lines,
                                 shared_ptr<set<vsize>> nums) :
                                sought_(s),
                                lines_(lines),
                                lines_num_(nums) {

}

ostream& print(ostream& os, const TextQueryResult& tqr) {
    cout <<"\"" << tqr.sought_ << "\" occurs "<< tqr.lines_num_->size()
         << MakePlural(tqr.lines_num_->size(), " time", "s") << endl;
    for(auto num : *tqr.lines_num_) {
        os << "\t(line " << num + 1 << ")"
             << (*tqr.lines_ )[num] << endl;
    }
    return os;
}
