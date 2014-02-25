// -------------------------------------------------------------------
// Author: lfwu
// Date: February-25-2014
// Note:
// Email:zgwulongfei@gmail.com
// Blog:http://blog.csdn.net/hackmind
// -------------------------------------------------------------------
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

struct IsEqual{
    bool operator()(int a) {
        return a != 15;
    }
};

int
main(int argc, char** argv){
    vector<int> vints;
    for(size_t i = 10; i < 20; ++i) {
        vints.push_back(i);
    }

    int num = 100;
    replace_if(vints.begin(), vints.end(), IsEqual(), num);

    for(auto it : vints) {
        cout << it << "\t";
    }
    cout << endl;
}
