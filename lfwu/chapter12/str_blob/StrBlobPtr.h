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
private:
    std::weak_ptr<std::vector<std::string>> wptr_;
    std::size_t curr_;
};
