// -------------------------------------------------------------------
// Author: lfwu
// Date: September-11-2013
// Note: Make a divide tool use try catch
// Email:zgwulongfei@gmail.com
// Blog:http://blog.csdn.net/hackmind
// -------------------------------------------------------------------
#include <iostream>
#include <exception>
using namespace std;

int
main(int argc, char** argv){
    bool is_right = false;
    while(!is_right) {

        cout<<"input the first num:";
        int num1;
        cin>>num1;

        cout<<"input the second num:";
        int num2;
        cin>>num2;

        try{
            if(num2 == 0) {
                continue;
            }
            int result =  num1/num2;
            cout<<num1<<"/"<<num2<<"="<<result<<"\n";
            is_right = true;
        }catch(exception& e) {
            cout<<"The input is:"<<e.what()<<"\n";
        }
    }
}
