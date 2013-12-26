// --------------------------------------------
// Author: hx
// Date: 十二月-19-2013
// Note:
// ---------------------------------------------
#include <iostream>

struct inflatable
{
	char name[20];
	float volume;
	double price;
};


int main(){
	using namespace std;

	inflatable *p=new inflatable;
	cout<<"Enter the name:"<<endl;
	cin.get(p->name,20);
	cout<<"Enter the cubic feed:"<<endl;
	cin>>(*p).volume;
	cout<<"Enter price:"<<endl;
	cin>>p->price;

	cout<<"(*p).name:"<<(*p).name<<endl;
	cout<<"(*p).volume:"<<(*p).volume<<endl;
	cout<<"(*p).price:"<<(*p).price<<endl;

	delete p;
	
	return 0;
}
