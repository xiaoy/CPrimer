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

	CandyBar *p=new CandyBar[3];

	CandyBar c1={"glu",3.2,240};
	CandyBar c2={"alu",1.7,270};
	CandyBar c3={"clu",4.5,340};

	p=&c1;
	cout<<"CandyBar's name:"<<p->name<<",CandyBar's weight:"<<p->weight<<",CandyBar's calilu:"<<p->calilu<<endl;
	p=p+1;
	p=&c2;
	cout<<"CandyBar's name:"<<p->name<<",CandyBar's weight:"<<p->weight<<",CandyBar's calilu:"<<p->calilu<<endl;
	p=p+1;
	p=&c3;
	cout<<"CandyBar's name:"<<p->name<<",CandyBar's weight:"<<p->weight<<",CandyBar's calilu:"<<p->calilu<<endl;

	delete [] p;
	return 0;
}
