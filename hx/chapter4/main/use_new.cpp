// --------------------------------------------
// Author: hx
// Date: 十二月-19-2013
// Note:
// ---------------------------------------------
#include <iostream>

int main(){
	using namespace std;

	int nights=1001;
	int* p_night;
	p_night=&nights;

	cout<<"p_night:"<<p_night<<" and *p_night:"<<*p_night<<endl;

	double* p=new double;
	*p=1001.11111;
	cout<<"p:"<<p<<" and *p:"<<*p<<endl;

	cout<<"sizeof p_night:"<<sizeof p_night<<" and sizeof p:"<<sizeof p<<endl;
	cout<<"sizeof *p_night:"<<sizeof(*p_night)<<" and sizeof *p:"<<sizeof(*p)<<endl;

	delete p;
	cout<<"when delete p,then p is:"<<endl;
	return 0;
}
