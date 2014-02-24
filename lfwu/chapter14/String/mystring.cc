#include "mystring.h"
#include <iostream>

std::allocator<char> MyString::alloc_;

std::ostream& operator<<(std::ostream& os, const MyString& ms) {
    for(auto elem = ms.element_; elem != ms.first_free_; ++elem) {
        os << *elem;
    }
    return os;
}

std::istream& operator>>(std::istream& is, MyString& ms) {
    auto got = is.rdbuf()->sgetc();
    while(got != EOF && !isspace(got)) {
        ms.push_back(got);
        got = is.rdbuf()->snextc();
    }
    return is;
}

MyString::MyString(const MyString& s){
    auto newData = alloc_n_copy(s.begin(), s.end());
    element_ = newData.first;
    first_free_ = cap_ = newData.second;
}

MyString::MyString(MyString&& s) {
    element_ = s.element_;
    first_free_ = s.first_free_;
    cap_ = s.cap_;
    s.element_ = first_free_ = cap_ = nullptr;
}
MyString::~MyString() {
    free();
}

MyString& MyString::operator=(const MyString& s) {
    auto newData = alloc_n_copy(s.begin(), s.end());
    free();
    element_ = newData.first;
    first_free_ = cap_ = newData.second;
    return *this;
}

void MyString::push_back(const char& ch) {
    chk_n_alloc();
    alloc_.construct(first_free_++, ch);
}
std::pair<char*, char*>
MyString::alloc_n_copy(const char* b, const char* e) {
    auto newData = alloc_.allocate(e-b);
    return {newData, std::uninitialized_copy(b, e, newData)};
}
void MyString::reallocate() {
    auto newCapacity = size() ? size() * 2 : 1;
    auto newData = alloc_.allocate(newCapacity);
    auto dest = newData;
    auto elem = element_;
    for(size_t i = 0; i < size(); ++i)
        alloc_.construct(dest++, std::move(*elem++));
    free();
    element_ = newData;
    first_free_ = dest;
    cap_ = element_ + newCapacity;
}

void MyString::free() {
    auto p = element_;
    for(size_t i = 0; i < size(); ++i)
        alloc_.destroy(p++);
    alloc_.deallocate(element_, cap_ - element_);
}
