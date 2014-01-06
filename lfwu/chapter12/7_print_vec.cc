// -------------------------------------------------------------------
// Author: lfwu
// Date: January-06-2014
// Note:
// Email:zgwulongfei@gmail.com
// Blog:http://blog.csdn.net/hackmind
// -------------------------------------------------------------------
#include <iostream>
#include <vector>
#include <memory>
using namespace std;

typedef vector<int> vint;

shared_ptr<vint> CreateInts(size_t len);
void SetUpInts(shared_ptr<vint>);
void PrintInts(shared_ptr<vint>);

int
main(int argc, char** argv){
    size_t size = 0;
    cout << "the number you want to input:";
    cin >> size;

    auto pv = CreateInts(size);
    SetUpInts(pv);
    PrintInts(pv);
}

shared_ptr<vint>
CreateInts(size_t len) {
    return make_shared<vint>(len);
}

void
SetUpInts(shared_ptr<vint> pv) {
    for(auto& it : *pv) {
        cin >> it;
    }
}

void
PrintInts(shared_ptr<vint> pv) {
    for(auto& it : *pv) {
        cout << it << " ";
    }
    cout << endl;
}
