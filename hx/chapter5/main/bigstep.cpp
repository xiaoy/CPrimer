// --------------------------------------------
// Author: hx
// Date: 十二月-20-2013
// Note:
// ---------------------------------------------
#include <iostream>

int main(){
	using namespace std;

	int by;
	cout<<"Enter your step:"<<endl;
	cin>>by;
	cout<<'\n';

	for(int i=0;i<100;i=i+by)
		cout<<i<<endl;


	return 0;
}
