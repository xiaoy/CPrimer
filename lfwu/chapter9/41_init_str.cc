// -------------------------------------------------------------------
// Author: lfwu
// Date: December-22-2013
// Note:
// Email:zgwulongfei@gmail.com
// Blog:http://blog.csdn.net/hackmind
// -------------------------------------------------------------------
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int
main(int argc, char** argv){
    vector<char> cvec = {'a', 'b', 'c', 'd', 'e', 'f'};
    string str;
    for(auto ch : cvec) {
        str.push_back(ch);
    }
    cout << str << endl;
}
