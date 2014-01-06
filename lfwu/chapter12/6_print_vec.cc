// -------------------------------------------------------------------
// Author: lfwu
// Date: January-06-2014
// Note:
// Email:zgwulongfei@gmail.com
// Blog:http://blog.csdn.net/hackmind
// -------------------------------------------------------------------
#include <iostream>
#include <vector>
using namespace std;

typedef vector<int> vint;

vint* CreateInts(size_t len);
void DelInts(vint*);
void SetUpInts(vint*);
void PrintInts(vint*);

int
main(int argc, char** argv){
    size_t size = 0;
    cout << "the number you want to input:";
    cin >> size;

    vint* pv = CreateInts(size);
    SetUpInts(pv);
    PrintInts(pv);
    DelInts(pv);
}

vint*
CreateInts(size_t len) {
    return new vint(len);
}

void DelInts(vint* pv) {
    if(pv != nullptr) {
        delete pv;
        pv = nullptr;
    }
}

void
SetUpInts(vint* pv) {
    for(auto& it : *pv) {
        cin >> it;
    }
}

void
PrintInts(vint* pv) {
    for(auto& it : *pv) {
        cout << it << " ";
    }
    cout << endl;
}
