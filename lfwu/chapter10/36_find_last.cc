// -------------------------------------------------------------------
// Author: lfwu
// Date: December-30-2013
// Note:
// Email:zgwulongfei@gmail.com
// Blog:http://blog.csdn.net/hackmind
// -------------------------------------------------------------------
#include "utility.h"
#include <iostream>
#include <list>
using namespace std;

int
main(int argc, char** argv){
    list<int> ilist = {1, 2 ,3 ,4 ,5 ,6 ,11, 21, 0, 34, 9, 0, 5, 7, 8};

    cout << "the list is:\n";
    PrintContainer(ilist);
    cout << endl;

    auto it = find(ilist.crbegin(), ilist.crend(), 0);
    cout << "before the find num:\n";
    PrintContainer(ilist.crbegin(), it);
    cout << endl;
}
