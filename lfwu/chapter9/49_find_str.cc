// -------------------------------------------------------------------
// Author: lfwu
// Date: December-24-2013
// Note:
// Email:zgwulongfei@gmail.com
// Blog:http://blog.csdn.net/hackmind
// -------------------------------------------------------------------
#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <vector>
#include "utility.h"
using namespace std;

int
main(int argc, char** argv){
    if(argc != 2) {
        cerr << "argument is wrong" << endl;
        return 0;
    }

    string cender = "dfpg";

    // read a file
    string file_name(argv[1]);
    fstream file(file_name);
    if(file == nullptr) {
        cerr << "open file:" << file_name << " failed";
        return 0;
    }

    // push string that not have ascender or descender
    vector<string> str_vec;
    string line;
    string word;
    string::size_type pos = -1;
    while(getline(file, line)) {
        istringstream is(line);
        while(is >> word) {
            pos = word.find_first_of(cender);
            if(pos != string::npos) {
                str_vec.push_back(word);
            }
        }
    }

    // find the longest word
    if(str_vec.size() == 0) {
        cout << "can not find match string\n";
        return 0;
    }

    if(str_vec.size() == 1) {
        cout << "the longest word is:" << str_vec[0] << endl;
        return 0;
    }

    PrintContainer(str_vec);
    cout << endl;

    size_t index = 0;
    size_t last = 0;
    for(size_t i = 0; i < str_vec.size()-1; ++i) {
        if(str_vec[i+1].length() > str_vec[last].length()) {
            index = i+1;
            last = index;
        }else{
            last = i;
        }
    }

    cout << "the longest word is:" << str_vec[index] << endl;
}
