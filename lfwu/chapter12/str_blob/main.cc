// -------------------------------------------------------------------
// Author: lfwu
// Date: January-08-2014
// Note:
// Email:zgwulongfei@gmail.com
// Blog:http://blog.csdn.net/hackmind
// -------------------------------------------------------------------
#include <iostream>
#include "StrBlob.h"
#include "StrBlobPtr.h"
using namespace std;

void TestStrBlob();
void TestStrBlobPtr();

int
main(int argc, char** argv){
    TestStrBlobPtr();
}

void
TestStrBlob() {
    StrBlob sb = {"hello", "world"};
    cout << sb.Front() << endl;

    const StrBlob csb = sb;
    cout << csb.Back() << endl;

    sb.PushBack("where");
    cout << sb.Back() << endl;

    sb.Pop();
    cout << sb.Back() << endl;
}
void
TestStrBlobPtr() {
    StrBlob sb = {"hello", "C++"};
    cout << "the current reference count is:" << sb.RefCount() << endl;
    StrBlobPtr sb_ptr(sb);
    cout << "after pass reference count is:" << sb.RefCount() << endl;

    cout << sb_ptr.DeRef() << endl;

    cout << sb_ptr.Incr().DeRef() << endl;
}
