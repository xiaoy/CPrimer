// --------------------------------------------
// Author: hx
// Date: 十二月-19-2013
// Note:
// ---------------------------------------------
#include <iostream>

struct CandyBar
{
	char name[20];
	double weight;
	int calilu;
};

int main(){
	using namespace std;

	CandyBar snack={"Mocha Munch",2.3,350};

	cout<<"snack's name:"<<snack.name<<endl;
	cout<<"snack's weight:"<<snack.weight<<endl;
	cout<<"snack's calilu:"<<snack.calilu<<endl;

	return 0;
}
