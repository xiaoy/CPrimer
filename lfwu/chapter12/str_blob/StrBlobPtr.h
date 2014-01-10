#ifndef STR_BLOB_PTR_
#define STR_BLOB_PTR_

#include "StrBlob.h"
#include <memory>
#include <string>
#include <vector>

class StrBlobPtr{
public:
    StrBlobPtr(){};
    StrBlobPtr(StrBlob& a, size_t sz = 0):
        wptr_(a.data_),
        curr_(sz)
    {

    }

    std::string& DeRef() const;
    StrBlobPtr& Incr();
    bool IsEnd();
private:
    std::shared_ptr<std::vector<std::string>>
        Check(std::size_t, const std::string& msg) const;
    std::weak_ptr<std::vector<std::string>> wptr_;
    std::size_t curr_;
};

#endif
