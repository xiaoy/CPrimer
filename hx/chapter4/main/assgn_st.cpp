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

	inflatable guest = {
		"Geroge Galy",
		1.88,
		29.99
	};

	cout<<"guest list is:"<<endl;
	cout<<"     name:"<<guest.name<<endl;
	cout<<"   volume:"<<guest.volume<<endl;
	cout<<"    price:"<<guest.price<<endl;

	inflatable choice;
	choice=guest;

	cout<<"choice list is:"<<endl;
	cout<<"     name:"<<choice.name<<endl;
	cout<<"   volume:"<<choice.volume<<endl;
	cout<<"    price:"<<choice.price<<endl;
	return 0;
}
