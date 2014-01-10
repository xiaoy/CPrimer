// -------------------------------------------------------------------
// Author: lfwu
// Date: January-08-2014
// Note:
// Email:zgwulongfei@gmail.com
// Blog:http://blog.csdn.net/hackmind
// -------------------------------------------------------------------
#include <iostream>
#include <fstream>
#include <map>
#include "StrBlob.h"
#include "StrBlobPtr.h"
using namespace std;

static map<string, void (*)(char**)> test_map;

void TestStrBlob(char** argv);
void TestStrBlobPtr(char** argv);
void TestStrBlobAll(char* agrv);
void InitMap();

int
main(int argc, char** argv){
    if(argc < 2){
        cerr << "input argument is wrong\n";
        return 0;
    }

    InitMap();
    string input(argv[1]);
    auto it = test_map.find(input);
    if(it != test_map.end()) {
        it->second(argv);
    }
}

void
TestStrBlob(char** argv) {
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
TestStrBlobPtr(char** argv) {
    StrBlob sb = {"hello", "C++"};
    cout << "the current reference count is:" << sb.RefCount() << endl;
    StrBlobPtr sb_ptr(sb);
    cout << "after pass reference count is:" << sb.RefCount() << endl;

    cout << sb_ptr.DeRef() << endl;

    cout << sb_ptr.Incr().DeRef() << endl;
}
void
TestStrBlobAll(char** argv) {
    string file_name(argv[2]);
    StrBlob sb;
    fstream in(file_name);
    if(in == nullptr) {
        cerr << "open file "<< file_name << "failed\n";
        return;
    }

    string line;
    while(getline(in, line)) {
        sb.PushBack(line);
    }

    if(sb.Size() == 0) {
        cerr << "file " << file_name << " content is empty\n";
        return;
    }

    StrBlobPtr sb_ptr(sb);
    while(!sb_ptr.IsEnd()){
        cout << sb_ptr.DeRef() << endl;
        sb_ptr.Incr();
    }
}
void
InitMap(){
    test_map = {{"sb", TestStrBlob},
                {"sb_ptr", TestStrBlobPtr},
                {"sb_all", TestStrBlobAll}
    };
}
