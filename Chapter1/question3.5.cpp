#include <iostream>
using namespace std;
int main()
{
    string st("hollo,world;");
    for(int i = 0; i < (st.size()); i++)
    cout << st[i] << endl;
    cout << "twice out put" << endl;
    for(string::size_type i = 0; i < (st.size()); i++)
    cout << st[i] << endl;


    return 0;
}
