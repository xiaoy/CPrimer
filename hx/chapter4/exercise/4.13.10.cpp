// --------------------------------------------
// Author: hx
// Date: 十二月-19-2013
// Note:
// ---------------------------------------------
#include <iostream>
#include <array>

int main(){
	using namespace std;

	array<double,3> a1;

	cout<<"Input first score:"<<endl;
	cin>>a1[0];
	cout<<"Input second score:"<<endl;
	cin>>a1[1];
	cout<<"Input third score:"<<endl;
	cin>>a1[2];

	double avg=(a1[0]+a1[1]+a1[2])/3;
	cout<<"first scroe  :"<<a1[0]<<endl;
	cout<<"second scroe :"<<a1[1]<<endl;
	cout<<"third score  :"<<a1[2]<<endl;
	cout<<"average score:"<<avg<<endl;

	return 0;
}
