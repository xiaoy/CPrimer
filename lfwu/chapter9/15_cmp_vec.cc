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

typedef vector<int> VecInt;

int CmpVec(const VecInt& v1, const VecInt& v2);
void PrintVec(const VecInt& v1, const VecInt& v2);
void PrintCmpRet(int ret);

int
main(int argc, char** argv){
    // the first group values
    VecInt v1 = {1, 2, 3, 4, 5, 6};
    VecInt v2 = {1, 2, 3, 4, 7};
    PrintVec(v1, v2);
    PrintCmpRet(CmpVec(v1, v2));

    // the second group values
    v1 = {1, 2, 3, 4, 5, 6};
    v2 = {1, 2, 3, 4, 5, 6};
    PrintVec(v1, v2);
    PrintCmpRet(CmpVec(v1, v2));

    // the third group values
    v1 = {1, 2, 3, 4, 5, 6};
    v2 = {1, 2, 1, 4, 5, 6};
    PrintVec(v1, v2);
    PrintCmpRet(CmpVec(v1, v2));

    // the forth group values
    v1 = {1, 2, 3, 4, 5, 6};
    v2 = {1, 2, 7, 4, 5, 6};
    PrintVec(v1, v2);
    PrintCmpRet(CmpVec(v1, v2));
}

int
CmpVec(const VecInt& v1, const VecInt& v2) {
    // compare vector length, the short is smaller
    if(v1.size() != v2.size()) {
        return v1.size() > v2.size() ? 1 : -1;
    }

    // compare all the elements, if one
    // of element is small then the vector is smaller
    for(auto index = 0; index < v1.size(); ++index) {
        if(v1[index] != v2[index]) {
            return v1[index] > v2[index] ? 1 : -1;
        }
    }

    // if all the element is same, the vector is equal
    return 0;
}

void
PrintVec(const VecInt& v1, const VecInt& v2) {
    for(auto it : v1)
        cout << it << "\t";
    cout << endl;

    for(auto it : v2)
        cout << it << "\t";
    cout << endl;
}

void
PrintCmpRet(int ret) {
    switch(ret) {
        case -1:
            cout << "v1 < v2" << endl;
            break;
        case 0:
            cout << "v1 == v2" << endl;
            break;
        case 1:
            cout << "v1 > v2" << endl;
            break;
        default:
            cout << "wrong argument" << endl;
    }
}
