// --------------------------------------------
// Author: hx
// Date: 八月-17-2013
// Note:
// ---------------------------------------------

#include <iostream>

int main(){
	using namespace std;
	const int PerBouds=14;
	int bonud;

	cout<<"input your bounds:"<<endl;
	cin>>bonud;
	cout<<"the bounds "<<bonud<<" is "<<bonud/PerBouds<<" stones and "<<bonud%PerBouds<<" bounds"<<endl;

	return 0;
}