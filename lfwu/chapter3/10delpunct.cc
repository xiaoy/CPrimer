// ---------------------------------
// Author: lfwu
// Date: August-03-2013
// Note: Delete the punctuation in string
// Email:zgwulongfei@gmail.com
// Blog:http://blog.csdn.net/hackmind
// ---------------------------------

#include <iostream>

using namespace std;

int
main(int argc, char** argv) {
    string line;
    string str;

    cout<<"Input the string:";
    getline(cin, line);

    for(auto& c : line) {
        if(ispunct(c)) {
            continue;
        }
        str += c;
    }

    cout<<"After remove the punctuation:"<<str<<endl;
}
