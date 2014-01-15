// -------------------------------------------------------------------
// Author: lfwu
// Date: January-15-2014
// Note:
// Email:zgwulongfei@gmail.com
// Blog:http://blog.csdn.net/hackmind
// -------------------------------------------------------------------
#include <iostream>
#include <ctime>
using namespace std;

class Numbered{
public:
    Numbered():mysn_(0) {
        srand(time(nullptr));
        mysn_ = rand();
    }

    Numbered(const Numbered& n) {
        srand(n.mysn_);
        int new_mysn = rand();
        this->mysn_ = new_mysn;
        cout << "call ...\n";
    }
    inline int GetMysn() const {return mysn_;}
private:
    int mysn_;
};

void Foo (const Numbered& s) {
    cout << s.GetMysn() << endl;
}
int
main(int argc, char** argv){
    Numbered a, b = a, c = b;
    Foo(a);
    Foo(b);
    Foo(c);
}
