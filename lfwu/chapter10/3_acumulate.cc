// -------------------------------------------------------------------
// Author: lfwu
// Date: December-24-2013
// Note:
// Email:zgwulongfei@gmail.com
// Blog:http://blog.csdn.net/hackmind
// -------------------------------------------------------------------
#include "utility.h"
#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

int
main(int argc, char** argv){
    vector<int> ivec;
    CreateRandSeq(ivec, 10, 1, 20);
    PrintContainer(ivec, '+');
    cout << "=" << accumulate(ivec.cbegin(), ivec.cend(), 0);
    cout << endl;
}
