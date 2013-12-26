// --------------------------------------------
// Author: hx
// Date: 十二月-19-2013
// Note:
// ---------------------------------------------
#include <iostream>

int main(){
	using namespace std;

	double* p3=new double[3];
	p3[0]=0.1;
	p3[1]=0.2;
	p3[2]=0.3;
	cout<<"p3[1]:"<<p3[1]<<endl;

	p3=p3+1;
	cout<<"p3[0]:"<<p3[0]<<endl;
	cout<<"p3[1]:"<<p3[1]<<endl;
	cout<<"p3[2]:"<<p3[2]<<endl;	//overflow

	p3=p3-1;
	cout<<"p3[2]:"<<p3[2]<<endl;
	delete []  p3;

	cout<<"p3 address"<<p3<<endl;//random value

	return 0;
}
