// -------------------------------------------------------------------
// Author: lfwu
// Date: December-19-2013
// Note:
// Email:zgwulongfei@gmail.com
// Blog:http://blog.csdn.net/hackmind
// -------------------------------------------------------------------
#include <iostream>
#include <vector>
#include <list>
#include <string>
using namespace std;

int
main(int argc, char** argv){
    list<char*> lists;
    lists.assign(10, "I like programing");
    vector<string> vecs;
    for(auto it : lists) {
        vecs.push_back(string(it));
    }

    for(auto it : vecs) {
        cout << it << endl;
    }
}
