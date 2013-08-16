#include <iostream>
using namespace std;
int main()
{
    int base, exp;
       long sum = 1;
   cout << "Please input two number" << endl;
   cin >> base >> exp;
   for(int i = 0; i < exp; i++)
   sum *= base;
   cout << sum;
    return 0;
}
