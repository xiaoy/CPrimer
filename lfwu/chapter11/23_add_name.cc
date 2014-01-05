// -------------------------------------------------------------------
// Author: lfwu
// Date: January-05-2014
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
    multimap<string, vector<string>> family_info;
    string line;
    while(getline(cin, line)) {
        istringstream in(line);
        string family_name;
        in >> family_name;
        string child_name;
        while(in >> child_name) {
            family_info.insert({family_name, {child_name}});
        }
    }

    for(auto it : family_info) {
        cout << "family:" << it.first << endl;
        cout << "child:";
        for(auto name : it.second) {
            cout << name << "\t";
        }
        cout << endl;
    }

    cin.clear();
    string key;
    cout << "input key to find:";
    cin >> key;
    auto it = family_info.find(key);
    if(it != family_info.end()) {
        cout << "family:" << it->first << "\nchild:";
        for(auto child : it->second) {
            cout << child << "\t";
        }
    }else{
        cout << "can not find the key:" << key;
    }
    cout << endl;
}
