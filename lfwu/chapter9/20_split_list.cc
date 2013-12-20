// -------------------------------------------------------------------
// Author: lfwu
// Date: December-20-2013
// Note:
// Email:zgwulongfei@gmail.com
// Blog:http://blog.csdn.net/hackmind
// -------------------------------------------------------------------
#include <iostream>
#include <list>
#include <algorithm>
using namespace std;

const int kMaxCount = 50;

int
main(int argc, char** argv){
    list<int> lists;
    for(size_t i = 1; i < kMaxCount; ++i) {
        lists.push_back(i);
    }

    list<int> odds;
    list<int> evens;
    for(auto it : lists) {
        if(it % 2 == 0) {
            evens.push_back(it);
        }else{
            odds.push_back(it);
        }

        cout << it << " ";
    }
    cout << endl;

    cout << "odds:";
    for(auto it : odds)
        cout << it << " ";
    cout<<endl;

    cout << "evens:";
    for(auto it : evens)
        cout << it << " ";
    cout << endl;
}
