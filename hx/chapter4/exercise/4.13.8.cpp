// --------------------------------------------
// Author: hx
// Date: 十二月-19-2013
// Note:
// ---------------------------------------------
#include <iostream>
#include <cstring>

struct pizza
{
	std::string companyName;
	double radious;
	double weight;
};

int main(){
	using namespace std;

	pizza *p=new pizza;

	cout<<"the radious of pizza:"<<endl;
	cin>>(*p).radious;
	cout<<"please input your company name:"<<endl;
	cin>>p->companyName;
	cout<<"And the weight of pizza:"<<endl;
	cin>>p->weight;

	cout<<"Info of the pizza is:"<<endl;
	cout<<"   companyName:"<<p->companyName<<endl;
	cout<<"   radious    :"<<p->radious<<endl;
	cout<<"   weight     :"<<p->weight<<endl;

	delete [] p;
	return 0;
}
