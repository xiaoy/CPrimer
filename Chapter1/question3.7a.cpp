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
          for (string::size_type i = 0; i < (st1.size() < st2.size() ? st1.size() : st2.size()); i++)
          {
              if (st1[i] == st2[i])
              continue;
              else if (st1[i] < st2[i])
              {
                  cout << "The longer string is " << st1 << endl;
                  break;
              }
              else
              {
                   cout << "The longer string is " << st2 << endl;
                break;
              }

          }
      }
    return 0;
}
