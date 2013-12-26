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

	pizza piz;

	cout<<"please input your company name:"<<endl;
	cin>>piz.companyName;
	cout<<"the radious of pizza:"<<endl;
	cin>>piz.radious;
	cout<<"And the weight of pizza:"<<endl;
	cin>>piz.weight;

	cout<<"Info of the pizza is:"<<endl;
	cout<<"   companyName:"<<piz.companyName<<endl;
	cout<<"   radious    :"<<piz.radious<<endl;
	cout<<"   weight     :"<<piz.weight<<endl;

	return 0;
}
