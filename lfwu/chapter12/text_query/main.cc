// -------------------------------------------------------------------
// Author: lfwu
// Date: January-13-2014
// Note:
// Email:zgwulongfei@gmail.com
// Blog:http://blog.csdn.net/hackmind
// -------------------------------------------------------------------
#include <iostream>
#include <fstream>
#include "text_query.h"
#include "text_query_result.h"
using namespace std;

int
main(int argc, char** argv){
    if(argc < 2) {
        cerr << "wrong argument\n";
        return 0;
    }

    string file_name{argv[1]};
    fstream fs(file_name);
    if(fs == nullptr) {
        cerr << "open file " << file_name << " failed\n";
        return 0;
    }

    TextQuery tq(fs);
    cout << "input a search word:";
    string sought;
    while(cin >> sought && sought != "q") {
        const TextQueryResult& tqr = tq.Query(sought);
        print(cout, tqr);
        cout << "input a search word:";
    }
}
