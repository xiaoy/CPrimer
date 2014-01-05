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

int
main(int argc, char** argv){
    multimap<string, string> book_infos;

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

    string author;
    cout << "input the author:";
    cin >> author;

    string book_name;
    cout << "input book name:";
    cin >> book_name;

    for(auto it = book_infos.begin(); it != book_infos.end();) {
        if(it->first == author && it->second == book_name) {
            it = book_infos.erase(it);
        }else{
            ++it;
        }
    }

    for(auto& it : book_infos) {
        cout << "author:" << it.first << "\t";
        cout << "book:" << it.second << endl;
    }
}
