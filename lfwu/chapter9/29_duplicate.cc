// -------------------------------------------------------------------
// Author: lfwu
// Date: December-22-2013
// Note:
// Email:zgwulongfei@gmail.com
// Blog:http://blog.csdn.net/hackmind
// -------------------------------------------------------------------
#include <iostream>
#include <list>
#include <forward_list>
#include "utility.h"
using namespace std;

int
main(int argc, char** argv){
    list<int> ilist;
    CreateSeq(ilist, 0, 9);

    cout << "list:\n";
    PrintContainer(ilist);
    cout << endl;

    for(auto it = ilist.begin(); it != ilist.end();) {
        if(*it % 2) {
            it = ilist.insert(it, *it);
            ++it;
            ++it;
        }else{
            it = ilist.erase(it);
        }
    }
    PrintContainer(ilist);
    cout << endl;

    forward_list<int> flist = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    cout << "forward list:\n";
    PrintContainer(flist);
    cout << endl;

    auto prev = flist.before_begin();
    auto curr = flist.begin();
    while(curr != flist.end()) {
        if(*curr % 2) {
            curr = flist.insert_after(prev, *curr);
            ++curr;
            prev = curr;
            ++curr;
        }else{
            curr = flist.erase_after(prev);
        }
    }

    PrintContainer(flist);
    cout << endl;
}
