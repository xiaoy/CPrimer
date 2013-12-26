// --------------------------------------------
// Author: hx
// Date: 十二月-18-2013
// Note:
// ---------------------------------------------
#include <iostream>
#include <string>
#include <cstring>

int main(){
	using namespace std;

	char charr1[20];
	char charr2[20]="jagur";

	string str1;
	string str2="panther";

	str1=str2;
	strcpy(charr1,charr2);
	cout<<"str2="<<str2<<endl;
	cout<<"charr2="<<charr2<<endl;

	cout<<"str1=str2,then str1="<<str1<<endl;
	cout<<"strcpy(charr1,charr2) then charr1="<<charr1<<endl;

	str1+=" paste";
	strcat(charr1," juice");

	int len1=str1.size();
	int len2=strlen(charr1);

	cout<<"length of str1:"<<len1<<endl;
	cout<<"length of charr1:"<<len2<<endl;

	return 0;
}
