// -------------------------------------------------------------------
// Author: lfwu
// Date: January-05-2014
// Note:
// Email:zgwulongfei@gmail.com
// Blog:http://blog.csdn.net/hackmind
// -------------------------------------------------------------------
#include <iostream>
#include <utility>
#include <vector>
#include <string>
#include <map>
using namespace std;

typedef map<string, vector<int>> vmap;
typedef pair<string, vector<int>> vpair;

const vmap& InsertMap(vmap&, vpair&);

int
main(int argc, char** argv){
    vpair ele = {"phone", {1001, 1002, 1003}};
    vmap words_count;

    InsertMap(words_count, ele);

    for(auto& it : words_count) {
        cout << "the " << it.first << " is:";
        for(auto it_phone : it.second) {
            cout << it_phone << "\t";
        }
        cout << endl;
    }
}


const vmap&
InsertMap(vmap& words_count, vpair& ele){
    words_count.insert(ele);
    return words_count;
}
