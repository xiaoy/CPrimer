#include "mystring.h"
#include <iostream>
#include <assert.h>

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

bool MyString::operator==(const MyString& ms) {
    auto isEqual = [=]()->bool {
        for(size_t i = 0; i < size(); ++i) {
            if(*(element_ + i) != *(ms.element_ + i)) {
                return false;
            }
        }
        return true;
    };
    return size() != ms.size() ? false : isEqual();
}

bool MyString::operator!=(const MyString& ms) {
    return !(*this == ms);
}

bool MyString::operator<(const MyString& ms) {
    auto isSmall = [=]()->bool {
        for(size_t i = 0; i < size(); ++i) {
            if(*(element_ + i) < *(ms.element_ + i)) {
                return true;
            }
        }
        return false;
    };
    return size() < ms.size() ? true : isSmall();
}

bool MyString::operator>=(const MyString& ms) {
    return !(*this < ms);
}

bool MyString::operator>(const MyString& ms) {
    auto isBig = [=]()->bool {
        for(size_t i = 0; i < size(); ++i) {
            if(*(element_ + i) > *(ms.element_ + i)) {
                return true;
            }
        }
        return false;
    };

    return size() > ms.size() ? true : isBig();
}

char MyString::operator[](size_t index) {
    assert(index < size() && index > 0);
    return *(element_ + index);
}

bool MyString::operator<=(const MyString& ms) {
    return !(*this > ms);
}

MyString MyString::operator+(const MyString& ms) {
    MyString str;
    for(size_t i = 0; i < size(); ++i) {
        str.push_back(*(element_ + i));
    }

    for(size_t j = 0; j < ms.size(); ++j) {
        str.push_back(*(ms.element_ + j));
    }
    return std::move(str);
}

MyString& MyString::operator+=(const MyString& ms) {
    for(size_t i = 0; i < ms.size(); ++i) {
        push_back(*(element_ + i));
    }
    return *this;
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
    s.element_ = s.first_free_ = s.cap_ = nullptr;
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
    if(element_) {
        for(auto p = element_; p != first_free_; ) {
            alloc_.destroy(p++);
        }
    }
    alloc_.deallocate(element_, cap_ - element_);
}
