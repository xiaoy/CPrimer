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
#include <vector>
using namespace std;

int
main(int argc, char** argv){
    vector<int> ivec;
    fill_n(back_inserter(ivec), 10, 0);
    PrintContainer(ivec);
    cout << endl;
}
