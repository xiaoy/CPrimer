// -------------------------------------------------------------------
// Author: lfwu
// Date: December-19-2013
// Note:
// Email:zgwulongfei@gmail.com
// Blog:http://blog.csdn.net/hackmind
// -------------------------------------------------------------------
#include <iostream>
#include <list>
using namespace std;

typedef list<int> ListInt;

int CmpList(const ListInt& l1, const ListInt& l2);
void PrintList(const ListInt& l1, const ListInt& l2);
void PrintCmpRet(int ret);

int
main(int argc, char** argv){
    // the first group values
    ListInt l1 = {1, 2, 3, 4, 5, 6};
    ListInt l2 = {1, 2, 3, 4, 7};
    PrintList(l1, l2);
    PrintCmpRet(CmpList(l1, l2));

    // the second group values
    l1 = {1, 2, 3, 4, 5, 6};
    l2 = {1, 2, 3, 4, 5, 6};
    PrintList(l1, l2);
    PrintCmpRet(CmpList(l1, l2));

    // the third group values
    l1 = {1, 2, 3, 4, 5, 6};
    l2 = {1, 2, 1, 4, 5, 6};
    PrintList(l1, l2);
    PrintCmpRet(CmpList(l1, l2));

    // the forth group values
    l1 = {1, 2, 3, 4, 5, 6};
    l2 = {1, 2, 7, 4, 5, 6};
    PrintList(l1, l2);
    PrintCmpRet(CmpList(l1, l2));
}

int
CmpList(const ListInt& l1, const ListInt& l2) {
    // compare vector length, the short is smaller
    if(l1.size() != l2.size()) {
        return l1.size() > l2.size() ? 1 : -1;
    }

    // compare all the elements, if one
    // of element is small then the vector is smaller
    auto it1 = l1.cbegin();
    auto it2 = l2.cbegin();
    for(; it1 != l1.cend(); ++it1, ++it2) {
        if(*it1 != *it2) {
            return *it1 > *it2 ? 1 : -1;
        }
    }

    // if all the element is same, the vector is equal
    return 0;
}

void
PrintList(const ListInt& l1, const ListInt& l2) {
    for(auto it : l1)
        cout << it << "\t";
    cout << endl;

    for(auto it : l2)
        cout << it << "\t";
    cout << endl;
}

void
PrintCmpRet(int ret) {
    switch(ret) {
        case -1:
            cout << "l1 < l2" << endl;
            break;
        case 0:
            cout << "l1 == l2" << endl;
            break;
        case 1:
            cout << "l1 > l2" << endl;
            break;
        default:
            cout << "wrong argument" << endl;
    }
}
