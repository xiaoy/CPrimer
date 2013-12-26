// --------------------------------------------
// Author: hx
// Date: 十二月-26-2013
// Note:
// ---------------------------------------------
#include <iostream>

int main(){
	using namespace std;

	char ch;
	int count=0;
	cout<<"Please some character,# should be  inputed if you want to exit"<<endl;
	cin>>ch;
	while(ch!='#'){
		cout<<ch;
		++count;
		cin>>ch;
	}
	cout<<endl<<count<<" character read\n"<<endl;

	return 0;
}
