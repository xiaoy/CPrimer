// -------------------------------------------------------------------
// Author: lfwu
// Date: September-09-2013
// Note:
// Email:zgwulongfei@gmail.com
// Blog:http://blog.csdn.net/hackmind
// -------------------------------------------------------------------
#include <iostream>
#include <map>
using namespace std;

typedef map<int, string> ScoreMap;
static const int k_max_score = 100;
bool
InitScoreMap(ScoreMap& score_map) {
    score_map.insert(make_pair(60, "pass"));
    score_map.insert(make_pair(75, "good"));
    score_map.insert(make_pair(85, "nice"));
    score_map.insert(make_pair(95, "high"));
    return true;
}
string
GetScoreEvaluate(ScoreMap& score_map, int score) {
    string evalute = "fail";

    ScoreMap::reverse_iterator riter = score_map.rbegin();
    for(; riter != score_map.rend(); ++riter) {
        if(score > riter->first) {
            evalute = riter->second;
            break;
        }
    }
    return evalute;
}

int
main(int argc, char** argv){
    // Input your score
    cout<<"Input your score(0,100):";
    int score = 0;
    cin>>score;
    if(score< 0 || score > k_max_score) {
        cout<<"Wrong score"<<endl;
        return 0;
    }

    // Init the score map;
    ScoreMap score_map;
    InitScoreMap(score_map);

    // Get the evaluate
    string evaluate = GetScoreEvaluate(score_map, score);
    cout<<"Your get a "<<evaluate<<" evaluate"<<endl;
}
