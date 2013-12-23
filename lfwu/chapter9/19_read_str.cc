// -------------------------------------------------------------------
// Author: lfwu
// Date: December-20-2013
// Note:
// Email:zgwulongfei@gmail.com
// Blog:http://blog.csdn.net/hackmind
// -------------------------------------------------------------------
#include <iostream>
#include <list>
#include <string>
using namespace std;

int
main(int argc, char** argv){
    list<string> lists;
    string str;
    while(cin >> str) {
        lists.push_back(str);
    }

    for(auto it : lists) {
        cout << it << endl;
    }
}
