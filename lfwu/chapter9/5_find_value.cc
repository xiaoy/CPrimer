// -------------------------------------------------------------------
// Author: lfwu
// Date: December-19-2013
// Note:
// Email:zgwulongfei@gmail.com
// Blog:http://blog.csdn.net/hackmind
// -------------------------------------------------------------------
#include <iostream>
#include <vector>
using namespace std;

typedef vector<int>::const_iterator IntIter;

IntIter find_value(IntIter begin, IntIter end, int value);

int
main(int argc, char** argv){
    vector<int> values = {1, 2 ,3 ,4 ,5, 6, 7, 8};

    int value = 4;
    if(find_value(values.cbegin(), values.cend(), value) != values.cend()) {
        cout << "find value:" << value << endl;
    }else{
        cout << "can not find value:" << value << endl;
    }

    value = 11;
    if(find_value(values.cbegin(), values.cend(), value) != values.cend()) {
        cout << "find value:" << value << endl;
    }else{
        cout << "can not find value:" << value << endl;
    }
}

IntIter
find_value(IntIter begin, IntIter end, int value) {
    for(auto it = begin; it != end; ++it) {
        if(*it == value) {
            return it;
        }
    }
    return end;
}
