// -------------------------------------------------------------------
// Author: lfwu
// Date: January-08-2014
// Note:
// Email:zgwulongfei@gmail.com
// Blog:http://blog.csdn.net/hackmind
// -------------------------------------------------------------------
#include <iostream>
#include "StrBlob.h"
using namespace std;

int
main(int argc, char** argv){
    StrBlob sb = {"hello", "world"};
    cout << sb.Front() << endl;

    const StrBlob csb = sb;
    cout << csb.Back() << endl;

    sb.PushBack("where");
    cout << sb.Back() << endl;

    sb.Pop();
    cout << sb.Back() << endl;
}
