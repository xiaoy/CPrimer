// ---------------------------------
// Author: lfwu
// Date: August-03-2013
// Note: Change the string to STRING
// Email:zgwulongfei@gmail.com
// Blog:http://blog.csdn.net/hackmind
// ---------------------------------

#include <iostream>

using namespace std;

int
main(int agrc, char** agrv) {
    string line;

    cout<<"Input string:";
    getline(cin, line);

    if(line.size() == 0) {
        return 0;
    }

    for(auto& c : line) {
        c = toupper(c);
    }
    cout<<"After convert:"<<line<<endl;
    return 0;
}
