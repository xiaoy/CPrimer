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

struct torgle_register
{
	unsigned int SN:4;
	unsigned int:4;
	bool goodIn:1;
	bool goodTorgle:1;
};

int main(){
	using namespace std;

	inflatable inf[2]={{"Gergo A",1.8,25.56},{"Gergo B",2.3,12.12}};

	cout<<"inf[0] list is:"<<endl;
	cout<<"     name:"<<inf[0].name<<endl;
	cout<<"   volume:"<<inf[0].volume<<endl;
	cout<<"    price:"<<inf[0].price<<endl;
	cout<<"inf[1] list is:"<<endl;
	cout<<"     name:"<<inf[1].name<<endl;
	cout<<"   volume:"<<inf[1].volume<<endl;
	cout<<"    price:"<<inf[1].price<<endl;

	torgle_register torgle={14,true,false};
	//自动对齐么？
	cout<<"sizeof torgle:"<<sizeof torgle<<endl;
	return 0;
}
