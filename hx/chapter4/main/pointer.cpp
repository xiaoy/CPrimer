// --------------------------------------------
// Author: hx
// Date: 十二月-19-2013
// Note:
// ---------------------------------------------
#include <iostream>

int main(){
	using namespace std;

	int updates=6;
	int * p_updates,*copy_updates;//initialized
	p_updates=&updates;

	cout<<"updates:"<<updates<<" and *p_updates:"<<*p_updates<<endl;
	cout<<"updates address:"<<&updates<<" and p_updates:"<<p_updates<<endl;

	*p_updates=*p_updates+1;
	cout<<"updates:"<<updates<<" and *p_updates:"<<*p_updates<<" and p_updates:"<<p_updates<<endl;

	copy_updates=p_updates;
	cout<<"copy_updates:"<<copy_updates<<endl;
	return 0;
}
