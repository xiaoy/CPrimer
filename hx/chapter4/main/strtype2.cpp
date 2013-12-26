// --------------------------------------------
// Author: hx
// Date: 十二月-18-2013
// Note:
// ---------------------------------------------
#include <iostream>

int main(){
	using namespace std;

	string str1="hello";
	string str2,str3;

	str2=str1;
	cout<<"when str2=str1,then str2's value is:"<<str2<<endl;
	str2=" bound";
	cout<<"a new str2 :"<<str2<<endl;
	str3=str1+str2;
	cout<<"str3=str1+str2,then str3="<<str3<<endl;

	return 0;
}
