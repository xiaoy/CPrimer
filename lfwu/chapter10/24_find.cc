// -------------------------------------------------------------------
// Author: lfwu
// Date: December-27-2013
// Note:
// Email:zgwulongfei@gmail.com
// Blog:http://blog.csdn.net/hackmind
// -------------------------------------------------------------------
#include "utility.h"
#include <iostream>
#include <functional>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;
using namespace std::placeholders;

bool CheckSize(const string& str, int num);
int
main(int argc, char** argv){
    vector<int> ivec;
    CreateRandSeq(ivec, 20, 1, 20);

    string str = "versions";
    cout << "the string is:" << str << endl;

    cout << "the int sequel:";
    PrintContainer(ivec);
    cout << endl;

    cout << "find the first greater num:\n";
    auto func = bind(CheckSize, _1, _2);
    for(auto it : ivec) {
        if(func(str, it)) {
            cout << it << endl;
            break;
        }
    }
}

bool
CheckSize(const string& str, int num) {
    if(num < 0) {
        return false;
    }
    return str.size() < num;
}
