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
using namespace std;

bool CmpIsbn(const Sales_item& s1, const Sales_item& s2);

int
main(int argc, char** argv){
    vector<Sales_item> item_vec(3);
    for(auto& it : item_vec) {
        cout << "input book no, units sold, price:";
        cin >> it;
    }

    PrintContainer(item_vec, '\n');

    sort(item_vec.begin(), item_vec.end(), CmpIsbn);
    cout << "after sort:\n";
    PrintContainer(item_vec, '\n');
}

bool
CmpIsbn(const Sales_item& s1, const Sales_item& s2) {
    return s1.isbn() < s2.isbn();
}
