// -------------------------------------------------------------------
// Author: lfwu
// Date: January-08-2014
// Note:
// Email:zgwulongfei@gmail.com
// Blog:http://blog.csdn.net/hackmind
// -------------------------------------------------------------------
#ifndef STR_BLOB_
#define STR_BLOB_

#include <string>
#include <vector>
#include <initializer_list>
#include <memory>

class StrBlob{
public:
    typedef std::vector<std::string>::size_type size_type;
    friend class StrBlobPtr;
    StrBlob();
    StrBlob(std::initializer_list<std::string> il);
    ~StrBlob();

    size_type Size() const { return data_->size();}
    size_type RefCount() const { return data_.use_count();}
    const std::string& Front();
    const std::string& Back();

    const std::string& Front() const;
    const std::string& Back() const;

    void PushBack(const std::string& str);
    void Pop();
private:
    std::shared_ptr<std::vector<std::string>> data_;
    void Check(size_type i, const std::string& str) const;
};

#endif
