// -------------------------------------------------------------------
// Author: lfwu
// Date: September-10-2013
// Note:
// Email:zgwulongfei@gmail.com
// Blog:http://blog.csdn.net/hackmind
// -------------------------------------------------------------------
#include <iostream>
#include <string>
#include <map>
using namespace std;

const static char space = ' ';
const static char tabs = '\t';
const static char line = '\n';
const static string delims[] = {"space" , "tabs", "line"};

map<string, int> symbols_map;

void InitSymbolsMap() {
    size_t length = sizeof(delims) / sizeof(delims[0]);
    for(size_t index = 0; index < length; ++index)
        symbols_map.insert(make_pair(delims[index], 0));
}

string GetDelimBySmybol(char ch) {
    string key;
   if(ch == space) {
       key = delims[0];
   }else if(ch == tabs) {
       key = delims[1];
   }else if(ch == line) {
       key = delims[2];
   }
   return key;
}
int
main(int argc, char** argv){
    // Init the map
    InitSymbolsMap();
    string text;
    getline(cin, text, '\0');
    for(auto ch : text) {
       string key = GetDelimBySmybol(ch);
       if(key.empty()) {
           continue;
       }
       symbols_map[key] += 1;
    }

    // Print the result
    for(auto& item : symbols_map) {
        cout<<"the symbol "<<item.first<<" count:"<<item.second<<endl;
    }
}
