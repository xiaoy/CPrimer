// -------------------------------------------------------------------
// Author: lfwu
// Date: December-30-2013
// Note:
// Email:zgwulongfei@gmail.com
// Blog:http://blog.csdn.net/hackmind
// -------------------------------------------------------------------
#include "utility.h"
#include <iostream>
#include <vector>
#include <list>
using namespace std;

int
main(int argc, char** argv){
    vector<int> ivec;
    CreateRandSeq(ivec, 10, 10, 50);

    cout << "the vector:\n";
    PrintContainer(ivec);
    cout << endl;

    list<int> ilist;

    copy(ivec.crbegin()+2, ivec.crbegin()+7, back_inserter(ilist));
    cout << "the list:\n";
    PrintContainer(ilist);
    cout << endl;
}
