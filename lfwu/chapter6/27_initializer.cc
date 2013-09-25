// -------------------------------------------------------------------
// Author: lfwu
// Date: September-24-2013
// Note:
// Email:zgwulongfei@gmail.com
// Blog:http://blog.csdn.net/hackmind
// -------------------------------------------------------------------
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int Sum(initializer_list<int> list) {
    int sum = 0;
    for(auto& it : list) {
        sum += it;
    }
    return sum;
}

void Log(vector<string> str_list) {
    for(auto& it : str_list) {
        cout<<it<<"\t";
    }
    cout<<endl;
}
int
main(int argc, char** argv){
    cout<<Sum({1, 2, 3 , 4})<<endl;
    Log({"hello", "world"});
}
