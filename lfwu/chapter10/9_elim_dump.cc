// -------------------------------------------------------------------
// Author: lfwu
// Date: December-25-2013
// Note:
// Email:zgwulongfei@gmail.com
// Blog:http://blog.csdn.net/hackmind
// -------------------------------------------------------------------
#include "utility.h"
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

void ElimDups(vector<string>& words);

int
main(int argc, char** argv){
    vector<string> str_vec = {
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
    PrintContainer(str_vec);
    cout << endl;

    ElimDups(str_vec);
}

void ElimDups(vector<string>& words) {
    sort(words.begin(), words.end());
    cout << "after sort:\n";
    PrintContainer(words);
    cout << endl;

    auto end_unique = unique(words.begin(), words.end());
    cout << "after unique:\n";
    PrintContainer(words);
    cout << endl;

    words.erase(end_unique, words.end());
    cout << "after erase:\n";
    PrintContainer(words);
    cout << endl;
}
