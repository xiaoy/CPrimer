#include <iostream>

using namespace std;
int main()
{
    string st1, st2;
    cin >> st1 >> st2;
    if (st1 == st2)
    cout << "The two string are the same ;" << endl;
    else
    {
        if (st1.size() > st2.size())
        cout << "The longer string is " << st1;
        else
        cout << "The longer string is " << st2;
    }


    return 0;
}
