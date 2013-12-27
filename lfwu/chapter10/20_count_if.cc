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
#include <algorithm>

using namespace std;

static const int kStrLengh = 6;

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

    size_t count = count_if(str_vec.begin(), str_vec.end(), [](const string& s) {
                return s.size() > kStrLengh;
            });

    cout << "The words length greater then 6 is:" << count << endl;
}
