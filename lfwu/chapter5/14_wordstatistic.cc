// -------------------------------------------------------------------
// Author: lfwu
// Date: September-11-2013
// Note:
// Email:zgwulongfei@gmail.com
// Blog:http://blog.csdn.net/hackmind
// -------------------------------------------------------------------
#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;

int
GetMaxNum(vector<int>& vec) {
    for(size_t i = 0; i < vec.size(); ++i) {
        if(vec[i] <= vec[i+1]) {
            continue;
        }
        for(size_t j = i; j < vec.size(); ++j) {
            if(vec[i] > vec[j]) {
                int temp = vec[i];
                vec[i] = vec[j];
                vec[j] = temp;
            }
        }
    }
    return vec[vec.size()-1];
}

int
main(int argc, char** argv){
    map<string, int> word_map;
    string word;
    while(cin>>word) {
        decltype(word_map)::iterator fiter = word_map.find(word);
        if(fiter == word_map.end()) {
            word_map.insert(make_pair(word, 1));
        }else{
            word_map[word] += 1;
        }
     }

    vector<int> count_vec;
    for(auto& item : word_map) {
        count_vec.push_back(item.second);
    }

    int max_num = GetMaxNum(count_vec);

    for(auto& item : word_map) {
        if(item.second == max_num) {
            cout<<"the word most is:"<<item.first<<" count:"<<item.second<<endl;
        }
    }
}
