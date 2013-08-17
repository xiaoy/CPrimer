// --------------------------------------------
// Author: hx
// Date: 八月-17-2013
// Note:
// ---------------------------------------------

#include <iostream>

int main(){
	using namespace std;

	char ch;
	int i;
	cout<<"Enter a char please:"<<endl;
	cin>>ch;
	i=ch;
	cout<<"the input character is :"<<ch<<endl;
	cout<<"And it's ASCII="<<i<<endl;
	cout<<"cout.put(ch) function's result:";
	cout.put(ch);
	cout<<endl;

	return 0;
}