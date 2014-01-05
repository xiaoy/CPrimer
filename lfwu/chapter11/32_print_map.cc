// -------------------------------------------------------------------
// Author: lfwu
// Date: January-05-2014
// Note:
// Email:zgwulongfei@gmail.com
// Blog:http://blog.csdn.net/hackmind
// -------------------------------------------------------------------
#include <iostream>
#include <sstream>
#include <string>
#include <map>
using namespace std;

bool CmpStr(const string& s1, const string& s2);
int
main(int argc, char** argv){
    multimap<string, string, decltype(CmpStr)*> book_infos{CmpStr};

    string line;
    while(getline(cin, line)) {
        istringstream in(line);
        string author;
        in >>  author;
        string book;
        while(in >> book) {
            book_infos.insert({author, book});
        }
    }

    cin.clear();

    for(auto& it : book_infos) {
        cout << "author:" << it.first << "\t";
        cout << "book:" << it.second << endl;
    }
}

bool
CmpStr(const string& s1, const string& s2) {
    if(s1.size() == 0 || s2.size() == 0) {
        return false;
    }

    return s1[0] < s2[0] ? true : false;
}
