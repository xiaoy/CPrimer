// -------------------------------------------------------------------
// Author: lfwu
// Date: December-25-2013
// Note:
// Email:zgwulongfei@gmail.com
// Blog:http://blog.csdn.net/hackmind
// -------------------------------------------------------------------
#include "utility.h"
#include <iostream>
#include <list>
#include <string>
#include <algorithm>
using namespace std;

void ElimDups(list<string>& words);

int
main(int argc, char** argv){
    list<string> str_list = {
        "fox",
        "jumps",
        "over",
        "quick",
        "red",
        "red",
        "slow",
        "the",
        "the",
        "turtle"
    };

    cout << "the words:\n";
    PrintContainer(str_list);
    cout << endl;

    ElimDups(str_list);
}

void ElimDups(list<string>& words) {
    words.sort();
    cout << "after sort:\n";
    PrintContainer(words);
    cout << endl;

    words.unique();
    cout << "after unique:\n";
    PrintContainer(words);
    cout << endl;
}
