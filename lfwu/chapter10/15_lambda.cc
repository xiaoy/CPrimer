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
    int b = 10;
    int a = 20;
    auto func = [a](int b) { return a + b;};
    cout << a << "+" << b << "=" << func(b) <<endl;
}
