// ---------------------------------
// Author: lfwu
// Date: August-03-2013
// Note: concatenate the input string to a string, then print the all world
//       separated by space
// Email:zgwulongfei@gmail.com
// Blog:http://blog.csdn.net/hackmind
// ---------------------------------

#include <iostream>

using namespace std;

const int MAX_LINE = 5;

int
main(int argc, char** argv) {
    // Get the string from input
    string line;
    string str;
    int count = 0;

    while(count < MAX_LINE) {
        count += 1;
        cout<<"input string "<<count<<":";
        getline(cin, line);
        str += line;
    }

    cout<<"After contact the string is:"<<endl;
    cout<<str<<endl;

    // Separate the string by space

    for(auto& c : str) {
        cout<<c;
        if(c == ' ') {
            cout<<endl;
        }
    }
    cout<<endl;
    return 0;
}
