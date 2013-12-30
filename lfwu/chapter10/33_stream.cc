// -------------------------------------------------------------------
// Author: lfwu
// Date: December-30-2013
// Note:
// Email:zgwulongfei@gmail.com
// Blog:http://blog.csdn.net/hackmind
// -------------------------------------------------------------------
#include "utility.h"
#include <iostream>
#include <algorithm>
#include <iterator>
#include <vector>
#include <fstream>
using namespace std;

static const int kFileCount = 4;

int
main(int argc, char** argv){
    if(argc != kFileCount) {
        cerr << "the argument is wrong\n";
        return 0;
    }

    fstream ifile(argv[1]);
    if(ifile == nullptr) {
        cerr << "open file " << string(argv[1]) << " failed\n";
        return 0;
    }

    istream_iterator<int> in(ifile), eof;
    vector<int> odd_vec;
    vector<int> even_vec;

    while(in != eof) {
        if(*in % 2 == 0) {
            even_vec.push_back(*in);
        }else{
            odd_vec.push_back(*in);
        }
        ++in;
    }

    fstream odd_file(argv[2]);
    if(odd_file == nullptr) {
        cerr << "open file " << string(argv[2]) << " failed\n";
        return 0;
    }
    ostream_iterator<int> odd_out(odd_file, " ");

    for(auto it : odd_vec) {
        *odd_out++ = it;
    }

    fstream even_file(argv[3]);
    if(even_file == nullptr) {
        cerr << "open file " << string(argv[3]) << " failed\n";
        return 0;
    }

    ostream_iterator<int> even_out(even_file, "|");
    for(auto it : even_vec) {
        *even_out++ = it;
    }

}
