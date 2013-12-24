// -------------------------------------------------------------------
// Author: lfwu
// Date: December-24-2013
// Note:
// Email:zgwulongfei@gmail.com
// Blog:http://blog.csdn.net/hackmind
// -------------------------------------------------------------------
#include <iostream>
#include <string>
#include <vector>
#include "utility.h"
using namespace std;

int
main(int argc, char** argv){
    vector<string> str_vec = {"1", "2", "3", "4.5", "-2.0"};
    PrintContainer(str_vec);
    cout << endl;

    float sum = 0;
    float val = 0;
    for(const auto& it : str_vec) {
        val = stof(it);
        sum += val;
    }
    cout << "the sum is:" << sum << endl;
}
