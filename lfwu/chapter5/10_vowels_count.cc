// -------------------------------------------------------------------
// Author: lfwu
// Date: September-09-2013
// Note:
// Email:zgwulongfei@gmail.com
// Blog:http://blog.csdn.net/hackmind
// -------------------------------------------------------------------
#include <iostream>
#include <string>
#include <map>

using namespace std;

map<char, int> map_word;
void InitWordMap() {
    // The vowels are a,e,i,o,u
    map_word.insert(make_pair('a', 0));
    map_word.insert(make_pair('e', 0));
    map_word.insert(make_pair('i', 0));
    map_word.insert(make_pair('o', 0));
    map_word.insert(make_pair('u', 0));
}
int
main(int argc, char** argv){
    // Init the word map, and get the statistics
    InitWordMap();
    string word;
    while(cin>>word) {
        char ch = word[0];
        char lower = tolower(ch);
        auto fiter = map_word.find(lower);
        if(fiter == map_word.end()) {
            continue;
        }
        map_word[ch] += 1;
    }

    // Print the result
    decltype(map_word)::iterator iter = map_word.begin();
    for(; iter != map_word.end(); ++iter) {
        cout<<"the vowels:"<<iter->first<<" count is: "<<iter->second<<endl;
    }
    return 0;
}
