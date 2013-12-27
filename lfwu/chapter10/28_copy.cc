// -------------------------------------------------------------------
// Author: lfwu
// Date: December-27-2013
// Note:
// Email:zgwulongfei@gmail.com
// Blog:http://blog.csdn.net/hackmind
// -------------------------------------------------------------------
#include "utility.h"
#include <iostream>
#include <list>
#include <vector>
#include <algorithm>

using namespace std;

int
main(int argc, char** argv){
    vector<int> ivec;

    auto Printlist = [](const list<int>& ilist, const string& title) {
       cout << title;
       PrintContainer(ilist);
       cout << endl;
    };

    CreateSeq(ivec, 1, 9);
    cout << "the seq is:\n";
    PrintContainer(ivec);
    cout << endl;
    // use inserter
    list<int> inserter_list;
    copy(ivec.begin(), ivec.end(), inserter(inserter_list, inserter_list.begin()));
    string title = "after call inserter:\n";
    Printlist(inserter_list, title);

    // use back inserter
    list<int> back_list;
    copy(ivec.begin(), ivec.end(), back_inserter(back_list));
    title = "after call back inserter:\n";
    Printlist(back_list, title);

    // use front insert
    list<int> front_list;
    copy(ivec.begin(), ivec.end(), front_inserter(front_list));
    title = "after call front inserter:\n";
    Printlist(front_list, title);
}
