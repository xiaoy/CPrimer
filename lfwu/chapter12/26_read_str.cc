// -------------------------------------------------------------------
// Author: lfwu
// Date: January-11-2014
// Note:
// Email:zgwulongfei@gmail.com
// Blog:http://blog.csdn.net/hackmind
// -------------------------------------------------------------------
#include <iostream>
#include <string>
#include <memory>
using namespace std;

static const size_t kMax = 5;
int
main(int argc, char** argv){
    allocator<string> alloc;
    auto * const p = alloc.allocate(kMax);
    auto * q = p;
    string str;
    while(cin >> str && q != p + kMax) {
        alloc.construct(q);
        *q = str;
        ++q;
    }

    const size_t size = q - p;
    q = p;
    for(size_t i = 0; i < size; ++i) {
        cout << q[i] << endl;
    }

    while(q != p + size) {
        alloc.destroy(q++);
    }
    alloc.deallocate(p, kMax);
}
