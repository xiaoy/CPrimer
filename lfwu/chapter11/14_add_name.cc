// -------------------------------------------------------------------
// Author: lfwu
// Date: January-03-2014
// Note:
// Email:zgwulongfei@gmail.com
// Blog:http://blog.csdn.net/hackmind
// -------------------------------------------------------------------
#include <iostream>
#include <map>
#include <vector>
#include <string>
#include <sstream>
using namespace std;

int
main(int argc, char** argv){
    map<string, vector<pair<string, string>>> family_info;
    string line;
    while(getline(cin, line)) {
        istringstream in(line);
        string family_name;
        in >> family_name;
        string child_name;
        string birthday;
        while(in >> child_name >> birthday) {
            pair<string, string> child_info = {child_name, birthday};
            family_info[family_name].push_back(child_info);
        }
    }

    for(auto it : family_info) {
        cout << "family:" << it.first << endl;
        cout << "child:";
        for(auto info : it.second) {
            cout << info.first << "\t" << info.second <<"\t";
        }
        cout << endl;
    }
}
