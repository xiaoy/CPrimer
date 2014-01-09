// -------------------------------------------------------------------
// Author: lfwu
// Date: January-09-2014
// Note:
// Email:zgwulongfei@gmail.com
// Blog:http://blog.csdn.net/hackmind
// -------------------------------------------------------------------
#include <iostream>
#include <memory>
using namespace std;

int
main(int argc, char** argv){
    int* pa = new int(10);
    shared_ptr<int> p(pa, [p](int* pi) {
                cout << "the delete is worked\n";
                cout << "the last reference is:" << p.use_count() << endl;
            });
    shared_ptr<int> q = p;
    cout << "the current reference is:" << q.use_count() << endl;
}
