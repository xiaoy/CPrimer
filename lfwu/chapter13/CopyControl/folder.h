#include <set>

class Message;
class Folder{
public:
    Folder(){}
    ~Folder();
    void PrintMsg();
    void AddMsg(Message*);
    void RemMsg(Message*);
private:
    std::set<Message*> msgs_;
    void Clear();
};
