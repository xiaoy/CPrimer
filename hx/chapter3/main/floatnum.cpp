// --------------------------------------------
// Author: hx
// Date: 八月-17-2013
// Note:
// ---------------------------------------------

#include <iostream>

int main(){
	using namespace std;

	cout.setf(ios_base::fixed,ios_base::floatfield);
	float a=10.0/3.0;
	double b=10.0/3.0;
	const float million=1.0e6;

	cout<<"a:"<<a<<endl;
	cout<<"b:"<<b<<endl;
	cout<<"million:"<<million<<endl;
	cout<<"million*a:"<<million*a<<endl;
	cout<<"million*b"<<million*b<<endl;
	cout<<"10*million*b"<<10*million*b<<endl;

	return 0;
}