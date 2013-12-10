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
    if(argc != 3) {
        cerr<<"wrong argument\n";
        return 0;
    }

    const char* if_name = argv[1];
    ifstream infile(if_name);
    if(infile == nullptr) {
        cerr<<"can not open file\n";
        return 0;
    }

    const char* of_name = argv[2];
    ofstream outfile(of_name);
    if(outfile == nullptr) {
        cerr<<"open out file failed\n";
        return 0;
    }

    Sales_data data;
    while(read(infile, data)) {
        print(outfile, data);
    }

    infile.close();
    outfile.close();
}
