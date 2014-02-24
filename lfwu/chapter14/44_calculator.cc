// -------------------------------------------------------------------
// Author: lfwu
// Date: February-20-2014
// Note:
// Email:zgwulongfei@gmail.com
// Blog:http://blog.csdn.net/hackmind
// -------------------------------------------------------------------
#include <iostream>
#include <functional>
using namespace std;
int sub(int a, int b) {
    return a - b;
}

class Divide{
public:
    int operator()(int a, int b) {
        return a/b;
    }
};
int
main(int argc, char** argv){
    function<int(int, int)> add = [](int a, int b) { return a + b;};
    function<int(int, int)> subFun = sub;
    function<int(int, int)> div = Divide();
}
