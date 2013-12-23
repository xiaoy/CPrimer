// --------------------------------------------
// Author: hx
// Date: 十二月-20-2013
// Note:
// ---------------------------------------------
#include <iostream>

int main(){
	using namespace std;

	int a=20,b=20;

	cout<<"----------(oper ++)-----"<<endl;

	cout<<"a="<<a<<",b="<<b<<endl;
	cout<<"a++="<<a++<<",b++="<<b++<<endl;
	cout<<"a="<<a<<",b="<<b<<endl;

	cout<<"----------(++ oper)-----"<<endl;

	a=20,b=20;
	cout<<"a="<<a<<",b="<<b<<endl;
	cout<<"++a="<<(++a)<<",++b="<<(++b)<<endl;
	cout<<"a="<<a<<",b="<<b<<endl;

	cout<<"----------(oper --)-----"<<endl;
	a=20,b=20;
	cout<<"a="<<a<<",b="<<b<<endl;
	cout<<"a--="<<a--<<",b--="<<b--<<endl;
	cout<<"a="<<a<<",b="<<b<<endl;

	cout<<"----------(-- oper)-----"<<endl;
	a=20,b=20;
	cout<<"a="<<a<<",b="<<b<<endl;
	cout<<"--a="<<(--a)<<",--b="<<(--b)<<endl;
	cout<<"a="<<a<<",b="<<b<<endl;


	return 0;
}
