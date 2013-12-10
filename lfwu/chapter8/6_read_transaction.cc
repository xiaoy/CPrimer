// -------------------------------------------------------------------
// Author: lfwu
// Date: December-10-2013
// Note:
// Email:zgwulongfei@gmail.com
// Blog:http://blog.csdn.net/hackmind
// -------------------------------------------------------------------
#include "Sales_data.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int
main(int argc, char** argv){
    if(argc != 2) {
        cerr<<"wrong argument\n";
        return 0;
    }

    const char* file_name = argv[1];
    ifstream infile(file_name);
    if(infile == nullptr) {
        cerr<<"can not open file\n";
        return 0;
    }

    Sales_data data;
    while(read(infile, data)) {
        print(cout, data);
    }

    infile.close();
}
