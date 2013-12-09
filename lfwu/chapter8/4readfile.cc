// -------------------------------------------------------------------
// Author: lfwu
// Date: December-02-2013
// Note:
// Email:zgwulongfei@gmail.com
// Blog:http://blog.csdn.net/hackmind
// -------------------------------------------------------------------
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int
main(int argc, char** argv){
    if(argc < 2) {
        return 0;
    }
    const char* pFilePath= argv[1];
    ifstream infile;
    infile.open(pFilePath);
    string str;
    while(getline(infile, str))
        cout<<str<<endl;
    infile.close();
}
