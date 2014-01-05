// -------------------------------------------------------------------
// Author: lfwu
// Date: January-05-2014
// Note:
// Email:zgwulongfei@gmail.com
// Blog:http://blog.csdn.net/hackmind
// -------------------------------------------------------------------
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <map>
using namespace std;

using smap = map<string, string>;

void WordTransform(fstream& map_file, fstream& input);
smap BuildMap(fstream& map_file);
const string& Transform(const string& s, smap& m);

int
main(int argc, char** argv){
    if(argc != 3) {
        cerr << "input error\n";
        return 0;
    }

    fstream f_words(argv[1]);
    if(f_words == nullptr) {
        cerr << "open file" << string(argv[1]) << " error\n";
        return 0;
    }

    fstream f_trans(argv[2]);
    if(f_trans == nullptr) {
        cerr << "open file" << string(argv[2]) << " error\n";
        return 0;
    }
    WordTransform(f_trans, f_words);
}

void
WordTransform(fstream& map_file, fstream& input) {
    // build the transform map
    auto trans_map = BuildMap(map_file);

    // input the file
    string line;
    while(getline(input, line)) {
        bool first_word = false;
        istringstream in(line);
        string word;
        while(in >> word) {
            if(!first_word) {
                first_word = true;
            }else{
                cout << " ";
            }
            // transform the word in the map file
            cout << Transform(word, trans_map);
        }
        cout << endl;
    }

}

smap
BuildMap(fstream& map_file) {
    smap trans_map;
    string key;
    string value;
    while(map_file >> key >> value) {
        if(!value.empty()) {
            trans_map[key] = value;
        }else{
            throw runtime_error("no rule for " + key);
        }
    }

    return trans_map;
}

const string&
Transform(const string& s, smap& m) {
    auto it = m.find(s);
    if(it != m.end()) {
        return it->second;
    }

    return s;
}
