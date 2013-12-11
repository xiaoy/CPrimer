// -------------------------------------------------------------------
// Author: lfwu
// Date: December-11-2013
// Note:
// Email:zgwulongfei@gmail.com
// Blog:http://blog.csdn.net/hackmind
// -------------------------------------------------------------------
#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <fstream>

using namespace std;

static const unsigned kPhoneNumMaxLen = 10;
struct PersonInfo{
    string name;
    vector<string> phones;
};

bool
valid(const string& nums);

string
format(const string& nums);

int
main(int argc, char** argv){
    if(argc != 2) {
        cerr << "wrong argument\n";
        return 0;
    }

    const char* file_name = argv[1];
    fstream fs(file_name);
    if(fs == nullptr) {
        cerr << "open file error\n";
        return 0;
    }

    vector<PersonInfo> persons;
    string line;

    while(getline(fs, line)) {
        istringstream is(line);
        PersonInfo info;
        is >> info.name;
        string phone_num;
        while(is >> phone_num) {
            info.phones.push_back(phone_num);
        }
        persons.push_back(info);
    }

    for(const auto& it : persons) {
        ostringstream formated, bad_nums;
        for(const auto& it_phone : it.phones) {
            if(!valid(it_phone)) {
                bad_nums << it_phone << "\t";
            }else{
                formated << format(it_phone) << "\t";
            }
        }

        cout << "user:" << it.name << endl;
        if(!formated.str().empty()) {
            cout << "formated:" << formated.str() << endl;
        }

        if(!bad_nums.str().empty()) {
            cout << "bad:" << bad_nums.str() << endl;
         }
    }
}

bool
valid(const string& nums){
    return (nums.length() > 0 && nums.length() < kPhoneNumMaxLen);
}

string
format(const string& nums) {
    string prefix = "010-";
    return (prefix + nums);
}
