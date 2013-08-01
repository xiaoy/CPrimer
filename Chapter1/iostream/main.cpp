#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    double a, b;
    char ch1, ch2;
    cout << "please input two interger and two char";
    cin >> a >> b;
    cin >> ch1 >> ch2;
    cout << setiosflags(ios::left) << setprecision(5) << setw(8) << a << " " << setw(8) << b << "\n" << setw(8) << ch1 << " " << setw(8) << ch2 << endl;
    cout << resetiosflags(ios::left) << setw(8) << "I hate c++" << "\n";
    cout << "Hello world!" << endl;
    return 0;
}
