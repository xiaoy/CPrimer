#include "folder.h"
#include "message.h"
#include <iostream>

using namespace std;

Folder::~Folder() {
    Clear();
}

void Folder::AddMsg(Message* msg) {
    msgs_.insert(msg);
}

void Folder::RemMsg(Message* msg) {
    msgs_.erase(msg);
}

void Folder::Clear() {
    msgs_.clear();
}

void Folder::PrintMsg() {
    for(auto it : msgs_) {
        cout << it->content_ << endl;
    }
}
