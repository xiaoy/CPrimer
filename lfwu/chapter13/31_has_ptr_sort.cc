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
#define SAFE_RELEASE(p)                                     \
    do {                                                    \
        if(p != 0) {                                        \
            delete p; p = 0;                                \
        }                                                   \
    }while(false)

class HasPtr{
public:
    friend ostream& operator<<(ostream& os, HasPtr& hp);
    friend void swap(HasPtr& lhs, HasPtr& rhs);
    HasPtr(const string& str = string(), int index = 0) :
        content_(new string(str)),
        index_(index),
        refrence_(new size_t(1))
    {
    }

    HasPtr(const HasPtr& hp) :
        content_(hp.content_),
        index_(hp.index_),
        refrence_(hp.refrence_)
    {
        ++*refrence_;
    }

    HasPtr& operator=(HasPtr& hp) {
        --(*refrence_);
        if(*refrence_ == 0)
            SAFE_RELEASE(content_);
        content_ = hp.content_;
        refrence_ = hp.refrence_;
        index_ = hp.index_;
        ++(*refrence_);

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

void SortHasPtr(vector<HasPtr>& hpVec);
void PrintHpVec(vector<HasPtr>& hpVec);
int
main(int argc, char** argv){
    vector<HasPtr> hp_vec;
    HasPtr hp1(string("hello, word"), 1);
    HasPtr hp2{string("hello, c++"), 2};
    HasPtr hp3{string("i like google"), 3};
    HasPtr hp4{string("i hate great wall")};
    HasPtr hp5{string("i am nice programer")};
    HasPtr hp6{string("who is your dad")};
    HasPtr hp7{string("who is your mum")};

    hp_vec.push_back(hp1);
    hp_vec.push_back(hp2);
    hp_vec.push_back(hp3);
    hp_vec.push_back(hp4);
    hp_vec.push_back(hp5);
    hp_vec.push_back(hp6);
    hp_vec.push_back(hp7);

    cout << "begin sort:\n";
    PrintHpVec(hp_vec);

    cout << "after sort:\n";
    SortHasPtr(hp_vec);
    PrintHpVec(hp_vec);
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
void
SortHasPtr(vector<HasPtr>& hpVec) {
    auto it = hpVec.begin();
    for(;it != hpVec.end(); ++it) {
        for(auto itNext = it + 1; itNext != hpVec.end(); itNext++) {
            if(*it < *itNext) {
                using std::swap;
                swap(*it, *itNext);
            }
        }
    }
}
void
PrintHpVec(vector<HasPtr>& hpVec) {
    for(auto& it : hpVec) {
        cout << it << endl;
    }
}
