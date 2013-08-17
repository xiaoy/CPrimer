// --------------------------------------------
// Author: hx
// Date: 八月-17-2013
// Note:
// ---------------------------------------------
#include <iostream>

int main(){
	using namespace std;
	cout.setf(ios_base::fixed,ios_base::floatfield);

	const int cst=60;
	int degrees;
	int minutes;
	int seconds;

	cout<<"input a degrees:";
	cin>>degrees;
	cout<<"input a minutes:";
	cin>>minutes;
	cout<<"input a seconds:";
	cin>>seconds;

	cout<<"******************"<<endl;
	cout<<"degrees="<<degrees<<endl;
	cout<<"minutes="<<minutes<<endl;
	cout<<"seconds="<<seconds<<endl;
	cout<<"******************"<<endl;

	float f=float((minutes*60+seconds))/(cst*cst);
	cout.precision(4);
	cout<<degrees<<"degrees,"<<minutes<<"minutes,"<<seconds<<"econds ="<<float(degrees)+f<<" degrees"<<endl;

	return 0;
}