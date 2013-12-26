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
bool IsShorter(const string& s1, const string& s2);

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

    stable_sort(str_vec.begin(), str_vec.end(), IsShorter);
    cout << "after stable sort:\n";
    PrintContainer(str_vec);
    cout << endl;
}

void
ElimDups(vector<string>& words) {
    auto unique_end = unique(words.begin(), words.end());
    words.erase(unique_end, words.end());
}

bool
IsShorter(const string& s1, const string& s2) {
    return s1.size() < s2.size();
}
