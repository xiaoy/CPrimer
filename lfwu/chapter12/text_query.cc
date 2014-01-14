// -------------------------------------------------------------------
// Author: lfwu
// Date: January-12-2014
// Note:
// Email:zgwulongfei@gmail.com
// Blog:http://blog.csdn.net/hackmind
// -------------------------------------------------------------------
#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <vector>
#include <set>
#include <map>
using namespace std;

struct WordInfo{
    size_t times;
    set<size_t> lines;
};

int
main(int argc, char** argv){
    if(argc < 2) {
        cerr << "the input argument is wrong\n";
        return 0;
    }
    // open a file
    string file_name{argv[1]};
    fstream fs{file_name};
    if(fs== nullptr) {
        cerr << "open the file " << file_name << endl;
        return 0;
    }
    // read the file content by line
    vector<string> line_vec;
    map<string, WordInfo> words_map;
    size_t line_num = 0;
    string line;
    while(getline(fs, line)) {
        line_vec.push_back(line);
        istringstream is{line};
        string word;
        while(is >> word) {
            auto it = words_map.find(word);
            // store the word by line number and times
            if(it != words_map.end()) {
                WordInfo& info = words_map[word];
                info.lines.insert(line_num);
                info.times = info.times + 1;
            }else{
                WordInfo info;
                info.times = 1;
                words_map[word] = info;
            }
        }
        line_num = line_num + 1;
    }

    // find the word result
    cout << "input the word you want query:";
    string find_word;
    while(cin >> find_word && find_word != "q") {
        auto it = words_map.find(find_word);
        if(it == words_map.end()) {
            cout << "can not find " << find_word << endl;
        }else{
            WordInfo info = it->second;
            cout << "find the word \"" << find_word << "\" "
                 << info.times << " times" << endl;
            cout << "the result is:\n";
            for(auto l_it : info.lines) {
                cout << "\t(line "<< (l_it + 1) << ")" <<line_vec[l_it] << endl;
            }
        }
        cout << "input the word you want query:";
    }

}
