// ---------------------------------
// Author: lfwu
// Date: August-02-2013
// Note:
// Email:zgwulongfei@gmail.com
// Blog:http://blog.csdn.net/hackmind
// ---------------------------------

#include <iostream>

using namespace std;

int
main(int argc, char** argv) {
    if(argc != 3) {
        cout<<"Wrong argument, use "<<argv[0]<<" str1 str2"<<endl;
        return 0;
    }

    string str1=argv[1];
    string str2=argv[2];

    if(str1.size() != str2.size()) {
        cout<<"The length is not equal"<<endl;
        return 0;
    }

    int index = 0;
    for(auto& c : str1) {
        char c2 = str2[index];
        if(c < c2) {
            cout<<"the "<<str1<<" is smaller then "<<str2<<endl;
            return 0;
        }else if(c > c2) {
            cout<<"the "<<str1<<" is bigger then "<<str2<<endl;
            return 0;
        }
    }
    cout<<"the "<<str1<<" is equal "<<str2<<endl;
    return 0;
}
