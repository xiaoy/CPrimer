// -------------------------------------------------------------------
// Author: lfwu
// Date: December-27-2013
// Note:
// Email:zgwulongfei@gmail.com
// Blog:http://blog.csdn.net/hackmind
// -------------------------------------------------------------------
#include "utility.h"
#include <iostream>
#include <vector>
#include <list>
#include <algorithm>

using namespace std;

int
main(int argc, char** argv){
    vector<int> ivec;

    CreateRandSeq(ivec, 10, 1, 5);

    cout << "the vector sequel is:";
    PrintContainer(ivec);
    cout << endl;

    list<int> ilist;
    unique_copy(ivec.begin(), ivec.end(), back_inserter(ilist));

    cout << "after unique copy,the list sequel is:";
    PrintContainer(ilist);
    cout << endl;
}
