// --------------------------------------------
// Author: hx
// Date: 十二月-19-2013
// Note:
// ---------------------------------------------
#include <iostream>
#include <vector>//c++98
#include <array> //c++11

int main(){
	using namespace std;

	//Original C++,C
	double a1[4]={1.0,2.0,3.0,4.0};

	//C++98 STL
	vector<double> a2(4);
	a2[0]=1.0/3.0;
	a2[1]=1.0/5.0;
	a2[2]=1.0/7.0;
	a2[3]=1.0/9.0;

	//c++11 
	array<double,4> a3={2.13,3.14,4.15,5.16};
	array<double,4> a4;
	a4=a3;

	cout<<"a1[2]"<<a1[2]<<" at "<<&a1[2]<<endl;
	cout<<"a2[2]"<<a2[2]<<" at "<<&a2[2]<<endl;
	cout<<"a3[2]"<<a3[2]<<" at "<<&a3[2]<<endl;
	cout<<"a4[2]"<<a4[2]<<" at "<<&a4[2]<<endl;

	a1[-2]=20.2;
	cout<<"a1[-2]"<<a1[-2]<<" at "<<&a1[-2]<<endl;
	cout<<"a3[2]"<<a3[2]<<" at "<<&a3[2]<<endl;
	cout<<"a4[2]"<<a4[2]<<" at "<<&a4[2]<<endl;

	return 0;
}
