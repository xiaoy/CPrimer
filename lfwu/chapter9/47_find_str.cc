// -------------------------------------------------------------------
// Author: lfwu
// Date: December-23-2013
// Note:
// Email:zgwulongfei@gmail.com
// Blog:http://blog.csdn.net/hackmind
// -------------------------------------------------------------------
#include <iostream>
#include <string>
#include <vector>
#include "utility.h"
using namespace std;

int
main(int argc, char** argv){
    string str = "ab2c3d7R4E6";
    cout << "str:" << str << endl;

    string other_str = str;


    string ints;
    CreateSeq(ints, '0', '9');

    string::size_type pos = 0;
    string cstr;
    string istr;

    // find first of chars
    while(str.length() > 0){
        pos = str.find_first_of(ints);
        if(pos != 0) {
            cstr.push_back(str[0]);
        }else{
            istr.push_back(str[0]);
        }
        str.erase(0, 1);
    }

    cout << "find first of chars:\n";
    cout << "char:" << cstr << endl;
    cout << "int:" << istr << endl;

    cstr.clear();
    istr.clear();
    // find first not of chars
    while(other_str.length() > 0){
        pos = other_str.find_first_not_of(ints);
        if(pos == 0) {
            cstr.push_back(other_str[0]);
        }else{
            istr.push_back(other_str[0]);
        }
        other_str.erase(0, 1);
    }

    cout << "find first of not chars:\n";
    cout << "char:" << cstr << endl;
    cout << "int:" << istr << endl;
}
