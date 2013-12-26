// -------------------------------------------------------------------
// Author: lfwu
// Date: December-26-2013
// Note:
// Email:zgwulongfei@gmail.com
// Blog:http://blog.csdn.net/hackmind
// -------------------------------------------------------------------
#include <iostream>
using namespace std;

int
main(int argc, char** argv){
    auto func = [](int a, int b) { return a + b;};
    int a = 10;
    int b = 10;
    cout << a << "+" << b << "=" << func(a, b) <<endl;
}
