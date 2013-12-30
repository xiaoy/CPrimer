// -------------------------------------------------------------------
// Author: lfwu
// Date: December-30-2013
// Note:
// Email:zgwulongfei@gmail.com
// Blog:http://blog.csdn.net/hackmind
// -------------------------------------------------------------------
#include "utility.h"
#include <iostream>
#include <vector>
using namespace std;

int
main(int argc, char** argv){
    vector<int> ivec;
    CreateRandSeq(ivec, 10, 1, 100);

    PrintContainer(ivec);
    cout << endl;

    PrintContainer(ivec.crbegin(), ivec.crend());
    cout << endl;
}
