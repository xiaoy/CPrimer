// --------------------------------------------
// Author: hx
// Date: 十二月-20-2013
// Note:
// ---------------------------------------------
#include <iostream>

int main(){
	using namespace std;

	int x=20;
	{
		int y=30;
		cout<<"x="<<x<<endl;
		cout<<"y="<<y<<endl;
	}
	cout<<"x="<<x<<endl;
//	cout<<"y="<<y<<endl;//it will be wrong

	cout<<"-----anthor sample--------"<<endl;
	{
		cout<<"x="<<x<<endl;
		x=100;
		cout<<"x="<<x<<endl;
	}
	cout<<"x="<<x<<endl;

	return 0;
}
