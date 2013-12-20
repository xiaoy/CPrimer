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
	cin.getline(name,Arsize).get(); //cin.getline()获取到cin对象，然后get，获取下面到换行符
	cout<<"Enter your favirate desert:";
	cin.getline(desert,Arsize).get();
	cout<<"I have some delicious "<<desert<<" for you,"<<name<<endl;


	return 0;
}
