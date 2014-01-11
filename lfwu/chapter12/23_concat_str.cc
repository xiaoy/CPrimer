// -------------------------------------------------------------------
// Author: lfwu
// Date: January-11-2014
// Note:
// Email:zgwulongfei@gmail.com
// Blog:http://blog.csdn.net/hackmind
// -------------------------------------------------------------------
#include <iostream>
#include <string>
using namespace std;

int
main(int argc, char** argv){
    string str1 = "hello";
    string str2 = "c++";
    size_t len = str1.size() + str2.size() +1;
    char *str = new char[len];
    for(size_t i = 0; i < str1.size(); ++i) {
        str[i] = str1[i];
    }

    for(size_t i = 0; i < str2.size(); ++i) {
        str[i+str1.size()] = str2[i];
    }
    str[len-1] = '\0';

    cout << str1 << "\t" << str2 << endl;
    string result(str);
    cout << result << endl;
    delete []str;
}
