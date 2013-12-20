// --------------------------------------------
// Author: hx
// Date: 十二月-17-2013
// Note:
// ---------------------------------------------
#include <iostream>
#include <cstring> //sttlen function needed

int main(){
	using namespace std;

	int const size=15;
	char name1[size];
	char name2[size]="C++owboy";

	cout<<"name2 is:"<<name2<<endl;
	cout<<"input an string first:";
	cin>>name1;
	cout<<"input string is :"<<name1<<endl;
	cout<<"strlen(name1) is:"<<strlen(name1)<<endl;
	cout<<name2[3]<<endl;
	cout<<name1[5]<<endl;


	return 0;
}
