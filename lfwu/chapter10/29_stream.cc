// -------------------------------------------------------------------
// Author: lfwu
// Date: December-29-2013
// Note:
// Email:zgwulongfei@gmail.com
// Blog:http://blog.csdn.net/hackmind
// -------------------------------------------------------------------
#include "utility.h"
#include <iostream>
#include <fstream>
#include <algorithm>
#include <vector>
#include <string>
#include <iterator>
using namespace std;

int
main(int argc, char** argv){
    if(argc != 2) {
        cerr << "the argument is wrong\n";
        return 0;
    }

    fstream file(argv[1]);
    if(file == nullptr) {
        cerr << "open file failed\n";
        return 0;
    }

    istream_iterator<string> it(file), eof;

    vector<string> str_vec;
    while(it++ != eof) {
        str_vec.push_back(*it);
    }

    cout << "the file content is:";
    PrintContainer(str_vec);
    cout << endl;

}
