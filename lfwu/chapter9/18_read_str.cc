// -------------------------------------------------------------------
// Author: lfwu
// Date: December-20-2013
// Note:
// Email:zgwulongfei@gmail.com
// Blog:http://blog.csdn.net/hackmind
// -------------------------------------------------------------------
#include <iostream>
#include <deque>
#include <string>
using namespace std;

int
main(int argc, char** argv){
    deque<string> que;
    string str;
    while(cin >> str) {
        que.push_back(str);
    }

    for(auto it : que) {
        cout << it << endl;
    }
}
