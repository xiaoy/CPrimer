// -------------------------------------------------------------------
// Author: lfwu
// Date: December-24-2013
// Note:
// Email:zgwulongfei@gmail.com
// Blog:http://blog.csdn.net/hackmind
// -------------------------------------------------------------------
#include "utility.h"
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int
main(int argc, char** argv){
    vector<int> ivec;
    CreateRandSeq(ivec, 200, 1, 100);
    PrintContainer(ivec);

    while(true) {
        int val = 0;
        cout << "input val you want to count:";
        cin >> val;
        int times = count(ivec.begin(), ivec.end(), val);
        cout << "the var:" << val << "count is:" << times<< endl;
    }

}
