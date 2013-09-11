// -------------------------------------------------------------------
// Author: lfwu
// Date: September-10-2013
// Note: statistics the ff fi fl count
// Email:zgwulongfei@gmail.com
// Blog:http://blog.csdn.net/hackmind
// -------------------------------------------------------------------
#include <iostream>
#include <string>
#include <map>
using namespace std;

static const string symbols[] = {"ff", "fi", "fl"};

map<string, int> symbol_map;

bool InitSymbolsMap() {
    size_t length = sizeof(symbols) / sizeof(symbols[0]);
    for(size_t index = 0; index < length; ++index) {
        symbol_map.insert(make_pair(symbols[index], 0));
    }
    return true;
}

string GetKeyBySymbol(const string& symbol) {
    string str;
    size_t length = sizeof(symbols) / sizeof(symbols[0]);
    for(size_t index = 0; index < length; ++index) {
        if(symbol.compare(symbols[index]) == 0) {
            str = symbol;
            break;
        }
    }
    return str;
}
int
main(int argc, char** argv){
    // Get word
    string word;
    while(cin>>word) {
        if(word.size() < 2) {
            continue;
        }

        // Get the first two char
        string key_word;
        key_word.push_back(word[0]);
        key_word.push_back(word[1]);

        // Check the word is in the array
        string symbol = GetKeyBySymbol(key_word);
        if(symbol.size() > 0) {
            symbol_map[symbol] +=1;
        }
    }

    // Print the map
    for(auto& item : symbol_map) {
        cout<<"the symbol "<<item.first<<" has:"<<item.second<<endl;
    }

}
