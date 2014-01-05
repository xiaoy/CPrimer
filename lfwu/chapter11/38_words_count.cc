// -------------------------------------------------------------------
// Author: lfwu
// Date: January-05-2014
// Note:
// Email:zgwulongfei@gmail.com
// Blog:http://blog.csdn.net/hackmind
// -------------------------------------------------------------------
#include <set>
#include <string>
#include <iostream>
#include <algorithm>
#include <unordered_map>
using namespace std;

int
main(int argc, char** argv){
    unordered_map<string, size_t> words_count;
    set<string> include = {"the", "but", "and", "or", "an", "a", "the"};

    string word;
    string lower_word;
    while(cin >> word) {
        lower_word = word;
        transform(word.begin(), word.end(), lower_word.begin(), ::tolower);
        if(include.find(lower_word) == include.end()) {
            words_count.insert({word, 0}).first->second++;
        }
    }

    for(auto it : words_count) {
        cout << "words:" << it.first << "\tcount:" << it.second << endl;
    }#include <iostream>
#include <iostream>

}
