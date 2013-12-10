// -------------------------------------------------------------------
// Author: lfwu
// Date: December-02-2013
// Note:
// Email:zgwulongfei@gmail.com
// Blog:http://blog.csdn.net/hackmind
// -------------------------------------------------------------------
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

istream& readstr(istream& in) {
    string str;
    while(in>>str)
        cout<<str<<endl;
    in.clear();
    return in;
}
int
main(int argc, char** argv){
    string str = "hello world";
    istringstream is(str);
    readstr(is);
}
