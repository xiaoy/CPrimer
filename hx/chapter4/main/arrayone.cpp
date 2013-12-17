// --------------------------------------------
// Author: hx
// Date: 十二月-17-2013
// Note:
// ---------------------------------------------
#include <iostream>

int main(){
	using namespace std;

	int yams[3];
	yams[0]=7;
	yams[1]=8;
	yams[2]=6;
	int yamcosts[3]={20,30,5};

    cout<<"total yams is ";
    cout<<yams[0]+yams[1]+yams[2]<<endl;
    int total=yams[0]*yamcosts[0]+yams[1]*yamcosts[1]+yams[2]*yamcosts[2];
    cout<<"the total is "<<total<<" cents.\n";

    cout<<"\nSize of yams array="<<sizeof yams;
    cout<<" bytes.\n";
    cout<<"Sizeof the element="<<sizeof yams[0];
    cout<<" bytes\n";

	return 0;
}
