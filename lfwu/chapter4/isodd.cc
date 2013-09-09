// -------------------------------------------------------------------
// Author: lfwu
// Date: September-05-2013
// Note:
// Email:zgwulongfei@gmail.com
// Blog:http://blog.csdn.net/hackmind
// -------------------------------------------------------------------
#include <iostream>
using namespace std;

int
main(int argc, char** argv){
    int value;
    cout<<"input the value:";
    cin>>value;

    if(value <= 2) {
        cout<<"the value is not odd or even"<<endl;
        return 0;
    }

    if(value%2 == 0) {
        cout<<"the value is even"<<endl;
    }else{
        cout<<"the value is odd"<<endl;
    }
}
