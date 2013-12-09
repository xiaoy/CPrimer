// -------------------------------------------------------------------
// Author: lfwu
// Date: December-02-2013
// Note:
// Email:zgwulongfei@gmail.com
// Blog:http://blog.csdn.net/hackmind
// -------------------------------------------------------------------
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

void ReadWord(string& line, vector<string>& strVec) {
    string str;
    for(size_t i = 0; i <= line.size(); ++i) {
        if(line[i] == ' ' || line[i] == '\t' || line[i] == '\0') {
            if(str.size() == 0) {
                continue;
            }
            strVec.push_back(str);
            str = "";
        }else{
            str += line[i];
        }
    }
}
int
main(int argc, char** argv){
    if(argc < 2) {
        return 0;
    }
    const char* pFilePath= argv[1];
    ifstream infile;
    infile.open(pFilePath);
    vector<string> strVec;
    string line;
    while(getline(infile, line)) {
        ReadWord(line, strVec);
    }
    infile.close();

    for(auto iter : strVec) {
        cout<<iter<<endl;
    }
}
