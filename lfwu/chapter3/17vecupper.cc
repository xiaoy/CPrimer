// -------------------------------------------------------------------
// Author: lfwu
// Date: August-04-2013
// Note: Get the word to upper then print line by eight word
// Email:zgwulongfei@gmail.com
// Blog:http://blog.csdn.net/hackmind
// -------------------------------------------------------------------

#include <iostream>
#include <vector>

using namespace std;

const size_t MAX_WORD       = 26;
const size_t LINE_COUNT     = 4;

void UpperString(string& str) {
    for(auto& c : str) {
        c = toupper(c);
    }
}
int
main(int argc, char** argv) {
    string word;
    size_t count = 0;
    vector<string> strVec;

    while(cin>>word) {
        UpperString(word);
        strVec.push_back(word);
        count += 1;
        if(count >= MAX_WORD) {
            break;
        }
    }

    size_t word_count = 0;
    for(auto iter = strVec.begin();
             iter != strVec.end(); ++iter) {
        cout<<word_count<<":"<<*iter<<"\t";
        word_count += 1;
        if(word_count == LINE_COUNT) {
            cout<<endl;
            word_count = 0;
        }
    }
    cout<<endl;
}
