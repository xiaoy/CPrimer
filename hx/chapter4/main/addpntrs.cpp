// --------------------------------------------
// Author: hx
// Date: 十二月-19-2013
// Note:
// ---------------------------------------------
#include <iostream>

int main(){
	using namespace std;

	double wages[3]={1000,2000,3000};
	int stack[3]={1,2,3};

	double *pw=wages;
	int *ps=&stack[0];
	cout<<"pw:"<<pw<<",ps:"<<ps<<endl;

	pw=pw+1;
	ps=ps+1;
	cout<<"pw:"<<pw<<",ps:"<<ps<<endl;

	cout<<"pw[0]:"<<pw[0]<<",wages[1]:"<<pw[1]<<",wages[2]:"<<pw[2]<<endl;
	cout<<"ps[0]:"<<ps[0]<<",stack[1]:"<<ps[1]<<",stack[2]:"<<ps[2]<<endl;


	pw=pw-2;
	ps=ps-2;
	cout<<"pw[0]:"<<pw[0]<<",pw[1]:"<<pw[1]<<",pw[2]:"<<pw[2]<<endl;
	cout<<"ps[0]:"<<ps[0]<<",ps[1]:"<<ps[1]<<",ps[2]:"<<ps[2]<<endl;


	return 0;
}
