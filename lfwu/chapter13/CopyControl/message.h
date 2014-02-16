#include <string>
#include <set>

class Folder;
class Message{
    friend class Folder;
public:
    explicit Message(const std::string& str = ""):
        content_(str)
    {

    }

    Message(const Message&);
    Message& operator=(const Message&);
    ~Message();

    void Save(Folder&);
    void Remove(Folder&);

private:
    std::string content_;
    std::set<Folder*> folders_;

    void AddToFolders();
    void RemoveFromFolders();
};
