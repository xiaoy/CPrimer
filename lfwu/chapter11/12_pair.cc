// -------------------------------------------------------------------
// Author: lfwu
// Date: January-03-2014
// Note:
// Email:zgwulongfei@gmail.com
// Blog:http://blog.csdn.net/hackmind
// -------------------------------------------------------------------
#include <iostream>
#include <vector>
#include <utility>
#include <string>
using namespace std;

int
main(int argc, char** argv){
    string book_no;
    int book_count;
    vector<pair<string, int>> book_info;

    while(cin >> book_no >> book_count) {
        if(book_no.size() == 0) {
            cout << "book no is empty\n";
            return 0;
        }

        pair<string, int> book = {book_no, book_count};
        book_info.push_back(book);
    }

    for(auto it : book_info) {
        cout << "book no:" << it.first << "\tcount:" << it.second << endl;
    }
}
