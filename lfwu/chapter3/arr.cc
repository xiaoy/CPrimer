// -------------------------------------------------------------------
// Author: lfwu
// Date: August-04-2013
// Note:
// Email:zgwulongfei@gmail.com
// Blog:http://blog.csdn.net/hackmind
// -------------------------------------------------------------------

#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    int a[] = {1, 2, 3, 4, 5, 6, 7};
    for(auto p = begin(a); p != end(a); ++p) {
        cout<<*p<<endl;
    }
    return 0;
}
