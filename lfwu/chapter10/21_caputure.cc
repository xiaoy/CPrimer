// -------------------------------------------------------------------
// Author: lfwu
// Date: December-27-2013
// Note:
// Email:zgwulongfei@gmail.com
// Blog:http://blog.csdn.net/hackmind
// -------------------------------------------------------------------
#include <iostream>
#include <algorithm>
using namespace std;

int
main(int argc, char** argv){
    int val = 10;
    auto IsZero = [&val]() { return val == 0;};

    while(!IsZero()) {
        --val;
    }

    cout << "the val:" << val << endl;
}
