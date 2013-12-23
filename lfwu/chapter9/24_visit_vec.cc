// -------------------------------------------------------------------
// Author: lfwu
// Date: December-21-2013
// Note:
// Email:zgwulongfei@gmail.com
// Blog:http://blog.csdn.net/hackmind
// -------------------------------------------------------------------
#include <iostream>
#include <vector>
using namespace std;

int
main(int argc, char** argv){
    vector<int> vec;
    vector<int>::const_iterator it = vec.begin();
    int value;
    value = vec.front();
    value = vec.at(0);
    value = vec[0];
}
