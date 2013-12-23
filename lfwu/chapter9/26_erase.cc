// -------------------------------------------------------------------
// Author: lfwu
// Date: December-21-2013
// Note:
// Email:zgwulongfei@gmail.com
// Blog:http://blog.csdn.net/hackmind
// -------------------------------------------------------------------
#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
#include "utility.h"
using namespace std;

int
main(int argc, char** argv){
    int a[] = {0, 1, 1, 2, 3, 5, 8, 13, 21, 55, 89};

    vector<int> vec(sizeof(a)/sizeof(int));
    copy(begin(a), end(a),vec.begin());

    cout << "before remove:";
    PrintContainer(vec);

    for(auto it = vec.begin(); it != vec.end();) {
        if(*it % 2 != 0){
            it = vec.erase(it);
        }else{
            ++it;
        }
    }
    cout << "\nafter  remove:";
    PrintContainer(vec);
    cout << endl;

    list<int> lists(sizeof(a)/sizeof(int));
    copy(begin(a), end(a),lists.begin());

    cout << "before remove:";
    PrintContainer(lists);

    for(auto it = lists.begin(); it != lists.end();) {
        if(*it % 2 != 0){
            it = lists.erase(it);
        }else{
            ++it;
        }
    }

    cout << "\nafter  remove:";
    PrintContainer(lists);
    cout << endl;
}

