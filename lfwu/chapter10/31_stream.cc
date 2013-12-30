// -------------------------------------------------------------------
// Author: lfwu
// Date: December-29-2013
// Note:
// Email:zgwulongfei@gmail.com
// Blog:http://blog.csdn.net/hackmind
// -------------------------------------------------------------------
#include "utility.h"
#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>
using namespace std;

int
main(int argc, char** argv){
    istream_iterator<int> in(cin), eof;

    vector<int> ivec;

    unique_copy(in, eof, back_inserter(ivec));

    PrintContainer(ivec);
    cout << endl;

    sort(ivec.begin(), ivec.end(), [](int v1, int v2) { return v1 < v2;});

    PrintContainer(ivec);
    cout << endl;
}
