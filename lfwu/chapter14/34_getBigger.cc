// -------------------------------------------------------------------
// Author: lfwu
// Date: February-25-2014
// Note:
// Email:zgwulongfei@gmail.com
// Blog:http://blog.csdn.net/hackmind
// -------------------------------------------------------------------
#include <iostream>
#include <string>
using namespace std;

template<typename T>
class GetBigger{
public:
    T operator()(T a, T b){
        return a > b ? a : b;
    }
};
int
main(int argc, char** argv){
    GetBigger<int> gb1;
    cout << gb1(10, 12) << endl;

    GetBigger<string> gb2;
    cout << gb2("c++", "java") << endl;
}
