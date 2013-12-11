// -------------------------------------------------------------------
// Author: lfwu
// Date: December-11-2013
// Note:
// Email:zgwulongfei@gmail.com
// Blog:http://blog.csdn.net/hackmind
// -------------------------------------------------------------------
#include <iostream>
#include <string>
#include <sstream>
#include <vector>

using namespace std;

struct PersonInfo{
    string name;
    vector<string> phones;
};

int
main(int argc, char** argv){
    vector<PersonInfo> person_infos;
    istringstream is;
    string line;
    while(getline(cin, line)) {
        is.str(line);
        PersonInfo info;
        is >> info.name;
        string phone_str;
        while(is >> phone_str) {
            info.phones.push_back(phone_str);
        }
        person_infos.push_back(info);
    }

    for(const auto& it : person_infos) {
        cout << "name:" << it.name << endl;
        cout << "phones:";
        for(const auto& it_phone : it.phones) {
            cout << it_phone;
            cout << "\t";
        }
        cout << endl;
    }
}
