#include "message.h"
#include "folder.h"

Message::Message(const Message& msg) :
    content_(msg.content_), folders_(msg.folders_)
{
    AddToFolders();
}

Message& Message::operator=(const Message& msg) {
    RemoveFromFolders();
    content_ = msg.content_;
    folders_ = msg.folders_;
    AddToFolders();
    return *this;
}

Message::~Message() {
    RemoveFromFolders();
}

void Message::AddToFolders() {
    for(auto f : folders_) {
        f->AddMsg(this);
    }
}

void Message::RemoveFromFolders() {
    for(auto f : folders_) {
        f->RemMsg(this);
    }
}

void Message::Save(Folder& f) {
    folders_.insert(&f);
    f.AddMsg(this);
}

void Message::Remove(Folder& f) {
    f.RemMsg(this);
    folders_.erase(&f);
}
