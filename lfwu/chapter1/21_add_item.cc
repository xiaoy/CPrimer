// -------------------------------------------------------------------
// Author: lfwu
// Date: December-09-2013
// Note:
// Email:zgwulongfei@gmail.com
// Blog:http://blog.csdn.net/hackmind
// -------------------------------------------------------------------
#include <iostream>
#include "Sales_item.h"
using namespace std;

int
main(int argc, char** argv){
    Sales_item item1;
    Sales_item item2;
    cin>>item1>>item2;
    Sales_item item;
    item = item1 + item2;
    cout<<item<<endl;
}
