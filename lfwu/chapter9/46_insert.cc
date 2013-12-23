// -------------------------------------------------------------------
// Author: lfwu
// Date: December-23-2013
// Note:
// Email:zgwulongfei@gmail.com
// Blog:http://blog.csdn.net/hackmind
// -------------------------------------------------------------------
#include <iostream>
#include <string>
using namespace std;

int
main(int argc, char** argv){
    string name = "lfwu";
    cout << name << endl;

    string prefix = "Mr.";
    string suffix = " III";

    name.insert(0, prefix);
    name.insert(name.length(), suffix);

    cout << name << endl;
}
