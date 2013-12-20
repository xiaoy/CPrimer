// --------------------------------------------
// Author: hx
// Date: 十二月-17-2013
// Note:
// ---------------------------------------------
#include <iostream>

int main(){
	using namespace std;

	int const Arsize=20;
	char name[Arsize];
	char desert[Arsize];

	cout<<"Enter your name:";
	cin.getline(name,Arsize);
	cout<<"Enter your favirate desert:";
	cin.getline(desert,Arsize);
	cout<<"I have some delicious "<<desert<<" for you,"<<name<<endl;

	return 0;
}
