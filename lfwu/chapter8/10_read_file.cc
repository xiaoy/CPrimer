// -------------------------------------------------------------------
// Author: lfwu
// Date: December-10-2013
// Note:
// Email:zgwulongfei@gmail.com
// Blog:http://blog.csdn.net/hackmind
// -------------------------------------------------------------------
#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

int
main(int argc, char** argv){
    vector<string> lines;
    string line;
    while(getline(cin, line)){
        lines.push_back(line);
    }

    string word;
    for(const auto& it : lines) {
        istringstream is(it);
        while(is >> word) {
            cout<<word<<endl;
        }
    }
}
