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

int
main(int argc, char** argv){
    StrVec strVec;
    strVec.push_back(string("i like apple"));
    strVec.push_back(string("i like google"));
    strVec.push_back(string("i like lua"));
    for(auto it : strVec) {
        cout << it << endl;
    }
}
