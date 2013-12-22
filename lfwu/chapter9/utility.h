// -------------------------------------------------------------------
// Author: lfwu
// Date: December-22-2013
// Note:
// Email:zgwulongfei@gmail.com
// Blog:http://blog.csdn.net/hackmind
// -------------------------------------------------------------------
#include <iostream>
#include <algorithm>
using namespace std;

template <class T>
void PrintContainer(T& con, char det= ' ') {
    for(auto it = con.cbegin(); it != con.cend(); ++it)
        cout << *it << det;
}
