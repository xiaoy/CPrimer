// -------------------------------------------------------------------
// Author: lfwu
// Date: December-25-2013
// Note:
// Email:zgwulongfei@gmail.com
// Blog:http://blog.csdn.net/hackmind
// -------------------------------------------------------------------
#include "utility.h"
#include "Sales_item.h"
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int
main(int argc, char** argv){
    vector<Sales_item> item_vec(3);
    for(auto& it : item_vec) {
        cout << "input book no, units sold, price:";
        cin >> it;
    }

    PrintContainer(item_vec, '\n');

    sort(item_vec.begin(), item_vec.end(),
            [](const Sales_item& it1, const Sales_item& it2)
                {return it1.isbn() < it2.isbn();}
            );
    cout << "after sort:\n";
    PrintContainer(item_vec, '\n');
}
