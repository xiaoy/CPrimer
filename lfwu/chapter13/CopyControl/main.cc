// -------------------------------------------------------------------
// Author: lfwu
// Date: February-16-2014
// Note:
// Email:zgwulongfei@gmail.com
// Blog:http://blog.csdn.net/hackmind
// -------------------------------------------------------------------
#include <iostream>
#include "message.h"
#include "folder.h"
using namespace std;

int
main(int argc, char** argv){
    Folder f;
    Message m1("c++");
    Message m2("c#");
    Message m3("c");
    Message m4 = m3;
    Message m5;
    m5 = m1;

    m1.Save(f);
    m2.Save(f);
    m3.Save(f);
    m4.Save(f);
    m5.Save(f);

    f.RemMsg(&m3);
    f.AddMsg(&m3);
    f.PrintMsg();
}
