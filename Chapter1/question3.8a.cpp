#include <iostream>

using namespace std;
int main()
{
    string st, st1, st2;
    cout << "Please input some string until Eed of file to stop;" << endl;
    cin >> st;
    while(cin >> st1)
    st = st1 + st;
    cout << st << endl;
    return 0;
}
