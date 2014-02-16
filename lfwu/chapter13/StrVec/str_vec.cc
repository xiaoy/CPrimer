#include "str_vec.h"
#include <algorithm>

std::allocator<std::string> StrVec::alloc_;
StrVec::StrVec(const StrVec& s) {
    auto newData = alloc_n_copy(s.begin(), s.end());
    elements_ = newData.first;
    first_free_ = cap_ = newData.second;
}

StrVec& StrVec::operator=(const StrVec& rhs) {
    auto newData = alloc_n_copy(rhs.begin(), rhs.end());
    free();
    elements_ = newData.first;
    first_free_ = cap_ = newData.second;
    return *this;
}

void StrVec::push_back(const std::string& s) {
    chk_n_alloc();
    alloc_.construct(first_free_++, s);
}

StrVec::~StrVec() {
    free();
}

std::pair<std::string*, std::string*>
StrVec::alloc_n_copy(const std::string* b, const std::string* e) {
    auto data = alloc_.allocate(e - b);
    return {data, uninitialized_copy(b, e, data)};
}

void StrVec::reserve(size_t n) {
    if(n <= capacity()) {
        return;
    }
    auto newData = alloc_.allocate(n);
    auto des = newData;
    auto elem = elements_;
    for(size_t i = 0; i < size(); ++i)
        alloc_.construct(des++, std::move(*elem++));
    free();
    elements_ = newData;
    first_free_ = des;
    cap_ = elements_ + n;
}

void StrVec::resize(size_t n) {
    if(n >= capacity() || n == size() ) {
        return;
    }

    if(n < size()) {
        for(size_t i = n; i < size(); ++i)
            alloc_.destroy(elements_ + i);
        first_free_ = elements_ + n;
        return;
    }

    for(size_t i = size(); i < n; ++i)
        alloc_.construct(elements_ + i, "0");
    first_free_ = elements_ + n;
}
void StrVec::free() {
    if(elements_) {
        // the normal ways to destroy the elements
        /*for(auto it = first_free_; it != elements_;)
            alloc_.destroy(--it); */

        // use lambda to destroy the elements
        for_each(elements_, first_free_, [](std::string str) {
                    alloc_.destroy(&str);
                });
        alloc_.deallocate(elements_, cap_ - elements_);
    }
}

void StrVec::reallocate() {
    auto newCapacity = size() ? size() * 2 : 1;
    auto newData = alloc_.allocate(newCapacity);
    auto des = newData;
    auto elem = elements_;
    for(size_t i = 0; i < size(); ++i)
        alloc_.construct(des++, std::move(*elem++));
    free();
    elements_ = newData;
    first_free_ = des;
    cap_ = elements_ + newCapacity;
}
