// --------------------------------------------
// Author: hx
// Date: 八月-17-2013
// Note:
// ---------------------------------------------

#include <iostream>

int main(){
	using namespace std;
	const int foot_inch=12;
	int height;

	cout<<"input your height(cm):";
	cin>>height;
	cout<<"your height("<<height<<") is "<<height/foot_inch<<" inch and "<<height%foot_inch<<" foot"<<endl;

	return 0;
}
