// -------------------------------------------------------------------
// Author: lfwu
// Date: December-27-2013
// Note:
// Email:zgwulongfei@gmail.com
// Blog:http://blog.csdn.net/hackmind
// -------------------------------------------------------------------
#include "utility.h"
#include <iostream>
#include <vector>
#include <string>
#include <functional>
#include <algorithm>

using namespace std;
using namespace std::placeholders;

static const size_t kStrLengh = 6;

bool CheckSize(const string& s, size_t len);

int
main(int argc, char** argv){
    vector<string> str_vec;
    string str;
    while(cin >> str) {
        str_vec.push_back(str);
    }
    cout << "The string:";
    PrintContainer(str_vec);
    cout << endl;

    auto func = bind(CheckSize, _1, kStrLengh);
    size_t count = count_if(str_vec.begin(), str_vec.end(), func);

    cout << "The words length smaller then 6 is:" << count << endl;
}

bool
CheckSize(const string& s, size_t len) {
    return s.size() <= len;
}
