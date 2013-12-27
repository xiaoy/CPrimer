// -------------------------------------------------------------------
// Author: lfwu
// Date: December-26-2013
// Note:
// Email:zgwulongfei@gmail.com
// Blog:http://blog.csdn.net/hackmind
// -------------------------------------------------------------------
#include "utility.h"
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <functional>

using namespace std;
using namespace std::placeholders;

static const int kBiggerLen = 5;

void ElimDup(vector<string>& words);

void PrintWords(vector<string>& words, string& title);

void Biggies(vector<string>& words, vector<string>::size_type sz);

bool CheckSize(const string& str, vector<string>::size_type sz);

int
main(int argc, char** argv){
    vector<string> words = {
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

    string title = "the string :";
    PrintWords(words, title);

    ElimDup(words);
    title = "after erase duplicate:";
    PrintWords(words, title);

    Biggies(words, kBiggerLen);
}

void
PrintWords(vector<string>& words, string& title) {
    cout << title << endl;
    PrintContainer(words);
    cout << endl;
}

void
ElimDup(vector<string>& words) {
    // sort the words by alphabetic
    sort(words.begin(), words.end());

    // unique the words
    auto end_unique = unique(words.begin(), words.end());

    // remove duplicate words
    words.erase(end_unique, words.end());
}

void
Biggies(vector<string>& words, vector<string>::size_type sz) {
    // sort the words by size
    sort(words.begin(), words.end(),
            [&sz](const string& s1, const string& s2)
                { return s1.size() > s2.size();}
        );

    // find the end of the need size
    auto func = bind(CheckSize, _1, sz);
    auto wc = partition(words.begin(), words.end(),func);

    // erase the smaller words
    words.erase(wc, words.end());

    // print the biggies words
    string title = "the longer words:";
    PrintWords(words, title);
}

bool
CheckSize(const string& str, vector<string>::size_type sz) {
    return str.size() >= sz;
}
