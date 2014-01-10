// -------------------------------------------------------------------
// Author: lfwu
// Date: January-09-2014
// Note:
// Email:zgwulongfei@gmail.com
// Blog:http://blog.csdn.net/hackmind
// -------------------------------------------------------------------
#include "StrBlobPtr.h"
#include <iostream>
using namespace std;

string&
StrBlobPtr::DeRef() const {
    auto p = Check(curr_, "dereference past end");
    return (*p)[curr_];
}

StrBlobPtr&
StrBlobPtr::Incr() {
    Check(curr_, "increment past end of StrBlobPtr");
    ++curr_;
    return *this;
}

bool
StrBlobPtr::IsEnd() {
    auto ret = wptr_.lock();
    return ret == nullptr || curr_ >= ret->size();
}
shared_ptr<vector<string>>
StrBlobPtr::Check(size_t i, const string& msg) const {
    auto ret = wptr_.lock();
    if(!ret) {
        throw runtime_error("unbound StrBlobPtr");
    }

    if(i > ret->size()) {
        throw out_of_range(msg);
    }

    return ret;
}
