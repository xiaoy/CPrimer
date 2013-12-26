// -------------------------------------------------------------------
// Author: lfwu
// Date: December-24-2013
// Note:
// Email:zgwulongfei@gmail.com
// Blog:http://blog.csdn.net/hackmind
// -------------------------------------------------------------------
#include "utility.h"
#include <iostream>
#include <algorithm>
#include <string>
#include <list>
#include <fstream>
#include <sstream>
using namespace std;

int
main(int argc, char** argv){
    if(argc != 2) {
        cerr << "argument is wrong, input like ./2_count_val.exe file" << endl;
        return 0;
    }

    fstream file(argv[1]);
    if(file == nullptr) {
        cout << "open file failed" << endl;
        return 0;
    }

    list<string> str_list;
    string line;
    while(getline(file, line)) {
        istringstream is(line);
        string word;
        while(is >> word) {
            str_list.push_back(word);
        }
    }

    PrintContainer(str_list);

    while(true) {
        string val;
        cout << "input val you want to count:";
        cin >> val;
        int times = count(str_list.cbegin(), str_list.cend(), val);
        cout << "the var:" << val << "count is:" << times<< endl;
    }

}
