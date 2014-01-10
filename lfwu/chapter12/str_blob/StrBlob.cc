// -------------------------------------------------------------------
// Author: lfwu
// Date: January-08-2014
// Note:
// Email:zgwulongfei@gmail.com
// Blog:http://blog.csdn.net/hackmind
// -------------------------------------------------------------------

#include "StrBlob.h"
#include <iostream>
using namespace std;

StrBlob::StrBlob():
                    data_(make_shared<vector<string>>()){

}

StrBlob::StrBlob(initializer_list<string> li):
                            data_(make_shared<vector<string>>(li)) {

}

StrBlob::~StrBlob() {
}

void
StrBlob::PushBack(const std::string& str) {
    data_->push_back(str);
}

void
StrBlob::Pop() {
    Check(0, "pop on empty StrBlob");
    data_->pop_back();
}

const std::string&
StrBlob::Front() {
    Check(0, "front on empty StrBlob");
    return data_->front();
}

const std::string&
StrBlob::Back() {
    Check(0, "back on empty StrBlob");
   return data_->back();
}

const std::string&
StrBlob::Front() const {
    Check(0, "front on empty StrBlob");
    return data_->front();
}

const std::string&
StrBlob::Back() const {
   Check(0, "back on empty StrBlob");
   return data_->back();
}

void
StrBlob::Check(size_type i, const string& str) const {
    if(i >= data_->size())
        throw std::out_of_range(str);
}
