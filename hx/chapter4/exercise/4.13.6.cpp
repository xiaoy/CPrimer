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

	CandyBar candyBar[3]={{"glu",3.2,240},{"alu",1.7,270},{"clu",4.5,340}};

	cout<<"name:"<<candyBar[0].name<<",weight:"<<candyBar[0].weight<<",calilu:"<<candyBar[0].calilu<<endl;
	cout<<"name:"<<candyBar[1].name<<",weight:"<<candyBar[1].weight<<",calilu:"<<candyBar[1].calilu<<endl;
	cout<<"name:"<<candyBar[2].name<<",weight:"<<candyBar[2].weight<<",calilu:"<<candyBar[2].calilu<<endl;

	return 0;
}
