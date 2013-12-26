// -------------------------------------------------------------------
// Author: lfwu
// Date: December-25-2013
// Note:
// Email:zgwulongfei@gmail.com
// Blog:http://blog.csdn.net/hackmind
// -------------------------------------------------------------------
#include "utility.h"
#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

static const size_t kStrSzie = 5;

bool IsLonger(const string& s);

int
main(int argc, char** argv){
    vector<string> str_vec;
    string str;
    while(cin >> str) {
        str_vec.push_back(str);
    }

    PrintContainer(str_vec);
    cout << endl;

    auto longer_end = partition(str_vec.begin(), str_vec.end(), IsLonger);

    cout << "longer:\n";
    PrintContainer(str_vec.begin(), longer_end + 1);
    cout << endl;

    cout << "smaller:\n";
    PrintContainer(longer_end + 1, str_vec.end());
    cout << endl;
}

bool
IsLonger(const string& s) {
    return s.size() > kStrSzie;
}
