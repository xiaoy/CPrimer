// --------------------------------------------
// Author: hx
// Date: 十二月-17-2013
// Note:
// ---------------------------------------------
#include <iostream>
#include <string>

int main(){
	using namespace std;

	char char1[20];
	char char2[20]="jaguar";

	string str1;
	string str2="panter";

	cout<<"Enter char1:";
	cin>>char1;
	cout<<"Enter str1 ";
	cin>>str1;
	cout<<"char1:"<<char1<<";char2:"<<char2<<endl;
	cout<<"str1:"<<str1<<";str2:"<<str2<<endl;

	cout<<"char2[2] is "<<char2[2];
	cout<<"\nstr2[2] is " <<str2[2]<<endl;

	return 0;
}
