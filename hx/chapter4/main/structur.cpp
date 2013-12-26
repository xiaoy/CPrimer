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

	inflatable pal = {
		"Jams Helen",
		2.55,
		11.23
	};

	cout<<"guest info list:name:"<<guest.name<<",volume:"<<guest.volume<<",price:"<<guest.price<<'\n';
	cout<<"total cost:"<<guest.price+pal.price<<endl;

	return 0;
}
