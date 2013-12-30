// -------------------------------------------------------------------
// Author: lfwu
// Date: December-29-2013
// Note:
// Email:zgwulongfei@gmail.com
// Blog:http://blog.csdn.net/hackmind
// -------------------------------------------------------------------
#include "Sales_item.h"
#include "utility.h"
#include <iostream>
#include <algorithm>
#include <iterator>
#include <vector>
using namespace std;

int
main(int argc, char** argv){
    istream_iterator<Sales_item> in(cin), eof;
    vector<Sales_item> item_vec;

    copy(in, eof, back_inserter(item_vec));

    sort(item_vec.begin(), item_vec.end(), [](const Sales_item& it1, const Sales_item& it2) {
                return it1.isbn() < it2.isbn();
            });

    vector<Sales_item>::iterator find_it = item_vec.end();
    Sales_item sum;
    for(auto it = item_vec.begin(); it != item_vec.end(); ) {
        find_it = find(it+1, item_vec.end(), *it);
        if(find_it != item_vec.end()) {
            sum = accumulate(it, find_it, sum);
            it = find_it;
            find_it = item_vec.end();
        }else{
            sum = *it;
            ++it;
        }
        cout << sum << endl;
    }
}
