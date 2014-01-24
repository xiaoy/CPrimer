// -------------------------------------------------------------------
// Author: lfwu
// Date: January-24-2014
// Note:
// Email:zgwulongfei@gmail.com
// Blog:http://blog.csdn.net/hackmind
// -------------------------------------------------------------------
#include <iostream>
#include <vector>
#include <string>
using namespace std;
#define SAFE_RELEASE(p)\
    do {\
        if(p != 0) {\
            delete p; p = 0; cout << "delete content\n";\
        }}while(false)

class HasPtr{
public:
    friend ostream& operator<<(ostream& os, HasPtr& hp);
    friend void swap(HasPtr& lhs, HasPtr& rhs);
    HasPtr(const string& str = string(), int index = 0) :
        content_(new string(str)),
        index_(index),
        refrence_(new size_t(1))
    {
        cout << "call constructor\n";
    }

    HasPtr(const HasPtr& hp) :
        content_(hp.content_),
        index_(hp.index_),
        refrence_(hp.refrence_)
    {
        ++*refrence_;
        cout << "call copy constructor\n";
    }

    HasPtr& operator=(HasPtr& hp) {
        --(*refrence_);
        if(*refrence_ == 0)
            SAFE_RELEASE(content_);
        content_ = hp.content_;
        refrence_ = hp.refrence_;
        index_ = hp.index_;
        ++(*refrence_);

        cout << "call operator = \n";
        return *this;
    }

    bool operator<(HasPtr& hs) {
        if(content_->length() != hs.content_->length()) {
            return content_->length() < hs.content_->length();
        }

        for(size_t i = 0; i < content_->length(); ++i) {
            if(content_[i] != hs.content_[i]) {
                return content_[i] < hs.content_[i];
            }
        }

        return false;
    }

    ~HasPtr() {
        cout << "the index is:" << index_ << endl;
        cout << "the reference is:" << *refrence_ << endl;
        cout << "call destructor\n";
        --(*refrence_);
        if(*refrence_ == 0) {
            SAFE_RELEASE(content_);
            SAFE_RELEASE(refrence_);
        }
    }

private:
    string* content_;
    int index_;
    size_t* refrence_;
};
int
main(int argc, char** argv){
    HasPtr hp1(string("hello, word"), 1);
    HasPtr hp2{string("hello, c++"), 2};
    HasPtr hp3{string("i like goole"), 3};
    HasPtr hp4{string("i hate great wall")};

}
ostream&
operator<<(ostream& os, HasPtr& hp) {
    os << *hp.content_;
    return os;
}

inline void
swap(HasPtr& lhs, HasPtr& rhs) {
    using std::swap;
    swap(lhs.content_, rhs.content_);
    swap(lhs.index_, rhs.index_);
    swap(lhs.refrence_, rhs.refrence_);
}
