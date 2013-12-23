// -------------------------------------------------------------------
// Author: lfwu
// Date: December-22-2013
// Note:
// Email:zgwulongfei@gmail.com
// Blog:http://blog.csdn.net/hackmind
// -------------------------------------------------------------------
#include <iostream>
#include <forward_list>
#include "utility.h"
using namespace std;

int
main(int argc, char** argv){
    forward_list<int> flist = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    cout << "before erase:";
    PrintContainer(flist);
    cout << endl;

    auto prev = flist.before_begin();
    auto curr = flist.begin();

    while(curr != flist.end()) {
        if(*curr % 2 != 0) {
            curr = flist.erase_after(prev);
        }else{
            prev = curr;
            ++curr;
        }
    }

    cout << "after  erase:";
    PrintContainer(flist);
    cout << endl;
}
