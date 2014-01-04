// -------------------------------------------------------------------
// Author: lfwu
// Date: January-03-2014
// Note:
// Email:zgwulongfei@gmail.com
// Blog:http://blog.csdn.net/hackmind
// -------------------------------------------------------------------
#include <iostream>
#include <map>
#include <string>
using namespace std;

int
main(int argc, char** argv){
    map<string, size_t> words_count = {{"hello", 10}, {"name", 20}, {"why", 18}};
    map<string, size_t>::const_iterator it = words_count.cbegin();
    while(it != words_count.cend()) {
        cout << it->first << " occurs " << it->second << " times\n";
        ++it;
    }
}
