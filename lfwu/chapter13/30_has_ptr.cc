// -------------------------------------------------------------------
// Author: lfwu
// Date: January-23-2014
// Note:
// Email:zgwulongfei@gmail.com
// Blog:http://blog.csdn.net/hackmind
// -------------------------------------------------------------------
#include <iostream>
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

    HasPtr& operator=(HasPtr hp) {
        swap(*this, hp);
        cout << "call operator = \n";
        return *this;
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
    string str = "i like c++";
    HasPtr hp1(string("hello, word"), 1);
    HasPtr hp2(str, 2);
    HasPtr hp3{str, 3};
    HasPtr hp4 = hp1;
    HasPtr hp5(hp4);
    hp4 = hp2;

    cout << hp1 << endl;
    cout << hp2 << endl;
    cout << hp3 << endl;
    cout << hp4 << endl;
    cout << hp5 << endl;
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
