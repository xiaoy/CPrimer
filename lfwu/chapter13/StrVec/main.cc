// -------------------------------------------------------------------
// Author: lfwu
// Date: February-16-2014
// Note:
// Email:zgwulongfei@gmail.com
// Blog:http://blog.csdn.net/hackmind
// -------------------------------------------------------------------
#include <iostream>
#include <string>
#include "str_vec.h"
using namespace std;

void PrintInfo(const StrVec& sv);

int
main(int argc, char** argv){
    StrVec strVec{"Dennis Ritchie", "Bjarne Stroustrup"};
    strVec.reserve(24);
    strVec.push_back(string("i like apple"));
    PrintInfo(strVec);
    strVec.push_back(string("i like google"));
    PrintInfo(strVec);
    strVec.push_back(string("i like lua"));
    PrintInfo(strVec);

    strVec.resize(20);
    for(auto it : strVec) {
        cout << it << endl;
    }
}

void
PrintInfo(const StrVec& sv) {
    cout << "size:" << sv.size()
         <<"\tcapacity:" << sv.capacity() << endl;
}
