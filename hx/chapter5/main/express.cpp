// --------------------------------------------
// Author: hx
// Date: 十二月-20-2013
// Note:
// ---------------------------------------------
#include <iostream>

int main(){
	using namespace std;

	int x;

	cout<<(x=100)<<endl;//x value

	cout<<(x<3)<<endl; //true or false
	cout<<(x>3)<<endl;

	cout.setf(ios_base::boolalpha);
	cout<<(x<3)<<endl; //true or false
	cout<<(x>3)<<endl;
	
	return 0;
}
