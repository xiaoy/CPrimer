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

void PrintVec(vector<string>& str_list) {
    cout<<"In function "<<__func__<<" line "<<__LINE__;
    cout<<" vector size is "<<str_list.size()<<endl;
    auto it = begin(str_list);
    if(it != end(str_list)) {
        cout<<*it<<endl;
        it++;
        vector<string> str_list_new(it, str_list.end());
        PrintVec(str_list_new);
    }
}
int
main(int argc, char** argv){
    vector<string> str_list = {"hello", "world"};
    PrintVec(str_list);
}
