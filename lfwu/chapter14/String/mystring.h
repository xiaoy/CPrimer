#ifndef MY_STRING_
#define MY_StRING_
#include <utility>
#include <memory>
#include <iostream>

class MyString{
    friend std::ostream& operator<<(std::ostream& os, const MyString&);
    friend std::istream& operator>>(std::istream& is, MyString&);
public:
    MyString() :
        element_(nullptr),first_free_(nullptr),cap_(nullptr)
    {

    }
    MyString(const char* p) :
        element_(nullptr),first_free_(nullptr),cap_(nullptr)
    {
        while(*p != '\0') {
            push_back(*p);
            ++p;
        }
    }
    ~MyString();
    MyString(const MyString&);
    MyString(MyString&&);

    MyString& operator=(const MyString&);
    bool operator==(const MyString&);
    bool operator!=(const MyString&);
    bool operator<(const MyString&);
    bool operator>(const MyString&);
    bool operator>=(const MyString&);
    bool operator<=(const MyString&);
    MyString& operator+=(const MyString&);
    MyString operator+(const MyString&);
    char operator[](size_t index);

    char* begin() const { return element_; }
    char* end() const { return first_free_; }
    size_t size() const { return first_free_ - element_; }
    size_t capcity() const { return cap_ - element_; }
    void push_back(const char&);
private:
    static std::allocator<char> alloc_;
    void reallocate();
    void free();
    void chk_n_alloc()
    { if(size() == capcity()) reallocate(); }
    std::pair<char*, char*>
        alloc_n_copy(const char*, const char*);
    char* element_;
    char* first_free_;
    char* cap_;
};
#endif
