// -------------------------------------------------------------------
// Author: lfwu
// Date: January-02-2014
// Note:
// Email:zgwulongfei@gmail.com
// Blog:http://blog.csdn.net/hackmind
// -------------------------------------------------------------------
#include <iostream>
#include <map>
#include <set>
#include <string>
#include <algorithm>
using namespace std;

void RmStrPunctuation(string& str, const set<char>& include);
int
main(int argc, char** argv){
    map<string, size_t> words_count;
    set<string> include = {"the", "but", "and", "or", "an", "a", "the"};
    set<char> ch_include = {',', ' ', '.', ':', '"', '\''};
    string word;
    string lower_word;
    while(cin >> word) {
        RmStrPunctuation(word, ch_include);
        if(word.size() == 0) {
            continue;
        }
        lower_word = word;
        transform(word.begin(), word.end(), lower_word.begin(), ::tolower);
        if(include.find(lower_word) == include.end()) {
            ++words_count[lower_word];
        }
    }

    for(auto it : words_count) {
        cout << "words:" << it.first << "\tcount:" << it.second << endl;
    }
}

void
RmStrPunctuation(string& str, const set<char>& include){
    for(auto it = str.begin(); it != str.end();) {
        if(include.find(*it) != include.end()) {
            it = str.erase(it);
        }else{
            ++it;
        }
    }
}
