#ifndef STR_VEC_
#define STR_VEC_
#include <string>
#include <memory>
#include <utility>
#include <initializer_list>

class StrVec{
public:
    StrVec():
        elements_(nullptr),first_free_(nullptr),cap_(nullptr)
    {
    }

    StrVec(std::initializer_list<std::string> ls):
        elements_(nullptr),first_free_(nullptr),cap_(nullptr)
    {
        for(auto it : ls) {
            push_back(it);
        }
    }

    StrVec(const StrVec&);
    StrVec& operator=(const StrVec&);
    ~StrVec();
    void push_back(const std::string&);
    void reserve(size_t);
    void resize(size_t);
    size_t size() const { return first_free_ - elements_; }
    size_t capacity() const { return cap_ - elements_; }
    std::string* begin() const { return elements_; }
    std::string* end() const { return first_free_; }
private:
    static std::allocator<std::string> alloc_;
    void chk_n_alloc()
    { if (size() == capacity()) reallocate(); }
    std::pair<std::string*, std::string*> alloc_n_copy
        (const std::string*, const std::string*);
    void free();
    void reallocate();
    std::string* elements_;
    std::string* first_free_;
    std::string* cap_;
};
#endif
