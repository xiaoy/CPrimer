// -------------------------------------------------------------------
// Author: lfwu
// Date: February-17-2014
// Note:
// Email:zgwulongfei@gmail.com
// Blog:http://blog.csdn.net/hackmind
// -------------------------------------------------------------------
#include <iostream>
#include "mystring.h"
using namespace std;

int
main(int argc, char** argv){
    MyString ms1("i like c++");

    //cin >> ms1;
    //cout << ms1<< endl;

    MyString ms2 = "i like c++";
    cout << (ms1 == ms2) << endl;

    MyString ms3 = "i like g++";
    cout << (ms1 != ms3) << endl;
    cout << (ms1 != ms2) << endl;
    cout << (ms1 > ms2) << endl;
    cout << (ms1 > ms3) << endl;
    cout << (ms3 >= ms1) << endl;

    cout << (ms1[2]) << endl;
    cout << ms1 + ms3 << endl;
    cout << (ms1 += ms3) << endl;
}
