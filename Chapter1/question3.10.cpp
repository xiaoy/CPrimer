#include <iostream>

//#include <cctype>
using namespace std;
int main()
{
    string st, st1;
    string::size_type num = 0;
    string::size_type j = 0;
    cin >> st;
    for(string::size_type i = 0; i != st.size(); i++)
    {
        if(ispunct(st[i]))
            ;
        else
            st1[j++] = st[i];
    }
    while(num != j)
        cout << st1[num++];
    return 0;
}
