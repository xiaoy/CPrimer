// -------------------------------------------------------------------
// Author: lfwu
// Date: September-11-2013
// Note: There two group numbers, test if one is anther prefix, ex:
// 1,2,3,4,5|1,2,3,4,5,6,7
// Email:zgwulongfei@gmail.com
// Blog:http://blog.csdn.net/hackmind
// -------------------------------------------------------------------
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int
main(int argc, char** argv){
    string group_one;
    string group_two;
    string line;
    getline(cin, line);

    bool isFind = false;
    for(auto& ch : line) {
        if(ch == ',') {
            continue;
        }

        if(ch == '|') {
            isFind = true;
            continue;
        }

        if(isFind) {
            group_one.push_back(ch);
        }else{
            group_two.push_back(ch);
        }
    }

    size_t group_one_len = group_one.size();
    size_t group_two_len = group_two.size();
    size_t len = group_one_len <= group_two_len ? group_one_len : group_two_len;

    bool is_prefix = true;
    for(size_t i = 0; i < len; ++i) {
        if(group_one[i] != group_two[i]) {
            is_prefix = false;
            break;
        }
    }

    if(is_prefix) {
        if(group_one_len <= group_two_len) {
            cout<<group_one<<" is prefix of "<<group_two<<endl;
        }
        cout<<group_two<<" is prefix of "<<group_one<<endl;
    }else{

        if(group_one_len <= group_two_len) {
            cout<<group_one<<" is not prefix of "<<group_two<<endl;
        }
        cout<<group_two<<" is not prefix of "<<group_one<<endl;
    }
}
