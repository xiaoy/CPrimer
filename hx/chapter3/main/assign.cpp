// --------------------------------------------
// Author: hx
// Date: 八月-17-2013
// Note:
// ---------------------------------------------

#include <iostream>

int main(){
	using namespace std;
	cout.setf(ios_base::fixed,ios_base::floatfield);

	float f=3;
	int fi=3.8923;
	int di=7.2E12;
	cout<<f<<endl;
	cout<<fi<<endl;
	cout<<di<<endl;
	cout<<(float)3<<endl;
	cout<<(int)'Q'<<endl;
	cout<<(int)19.99+(int)11.99<<endl;//old style
	cout<<int(19.99)+int(11.99)<<endl;//new style

	cout<<char(65)<<endl;
	cout<<char('A')<<endl;
	return 0;
}