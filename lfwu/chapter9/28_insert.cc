// -------------------------------------------------------------------
// Author: lfwu
// Date: December-22-2013
// Note:
// Email:zgwulongfei@gmail.com
// Blog:http://blog.csdn.net/hackmind
// -------------------------------------------------------------------
#include <iostream>
#include <string>
#include <forward_list>
#include "utility.h"
using namespace std;

void InsertStr(forward_list<string>& flist, string& findStr, string& insertStr);

int
main(int argc, char** argv){
    forward_list<string> flist = {
        "i",
        "went",
        "out",
        "to",
        "the",
        "hazel",
        "wood",
        "because",
        "a",
        "fire",
        "was",
        "in",
        "my",
        "head"
    };

    PrintContainer(flist);
    cout << endl;

    // find string and insert
    string find_str = "was";
    string insert_str = "middle";

    InsertStr(flist, find_str, insert_str);
    PrintContainer(flist);
    cout << endl;

    // can not find the string and insert to end list
    find_str = "how";
    insert_str = "end";

    InsertStr(flist, find_str, insert_str);
    PrintContainer(flist);
    cout << endl;
}

void
InsertStr(forward_list<string>& flist, string& findStr, string& insertStr) {
    auto curr = flist.begin();
    decltype(curr) last;
    while(curr != flist.end()) {
        last = curr;
        if(*curr == findStr) {
            curr = flist.insert_after(curr, insertStr);
            return;
        }else{
            ++curr;
        }
    }
    flist.insert_after(last, insertStr);
}
