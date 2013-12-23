// -------------------------------------------------------------------
// Author: lfwu
// Date: December-23-2013
// Note:
// Email:zgwulongfei@gmail.com
// Blog:http://blog.csdn.net/hackmind
// -------------------------------------------------------------------
#include <iostream>
#include <string>
using namespace std;

void ReplaceStr(string& str, const string& newVal, const string& oldVal);

int
main(int argc, char** argv){
    string str = "i am a good man";
    cout << str << endl;
    string oldVal = "good";
    string newVal = "bad";
    ReplaceStr(str, newVal, oldVal);
    cout << str << endl;
}

void
ReplaceStr(string& str, const string& newVal, const string& oldVal) {
    size_t index = -1;
    for(size_t i = 0; i < str.size() - oldVal.size(); ++i) {
        for(size_t j = 0; j < oldVal.size(); ++j) {
            if(oldVal[j] == str[i+j]){
                if(j == oldVal.size() -1) {
                    index = i;
                    break;
                }
                continue;
            }else{
                break;
            }
        }
        if(index != -1) {
            break;
        }
    }

    if(index != -1) {
        str.erase(index, oldVal.size());
        str.insert(index, newVal);
    }
}
