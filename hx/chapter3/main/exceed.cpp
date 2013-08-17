// --------------------------------------------
// Author: hx
// Date: 八月-14-2013
// Note:
// ---------------------------------------------

#include <iostream>
#define ZERO 0
#include <climits>

int main(){
	using namespace std;
	short sam=SHRT_MAX;
	unsigned short sue=sam;

	cout<<"sam="<<sam<<", and sue="<<sue<<endl;
	sam=sam+1;
	sue=sue+1;
	cout<<"sam+1="<<sam<<", and sue+1="<<sue<<endl;
	sam=ZERO;
	sue=ZERO;
	cout<<"sam="<<sam<<", and sue="<<sue<<endl;
	sam=sam-1;
	sue=sue-1;
	cout<<"sam-1="<<sam<<", and sue-1="<<sue<<endl;

	return 0;

}