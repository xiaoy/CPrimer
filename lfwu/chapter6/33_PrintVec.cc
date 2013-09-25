// -------------------------------------------------------------------
// Author: lfwu
// Date: September-24-2013
// Note:
// Email:zgwulongfei@gmail.com
// Blog:http://blog.csdn.net/hackmind
// -------------------------------------------------------------------
#include <iostream>
#include <string>
#include <vector>
using namespace std;

void PrintVec(vector<string>& str_list, vector<string>::iterator it) {
    if(it != str_list.end()) {
        cout<<*it<<endl;
        it++;
        PrintVec(str_list, it);
    }
}
int
main(int argc, char** argv){
    vector<string> str_list = {"hello", "world"};
    PrintVec(str_list, begin(str_list));
}
