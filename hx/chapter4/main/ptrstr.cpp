// --------------------------------------------
// Author: hx
// Date: 十二月-19-2013
// Note:
// ---------------------------------------------
#include <iostream>
#include <cstring>

int main(){
	using namespace std;

	char animal[20]="bear";
	const char* bird="wren";
	char *ps;

	cout<<"animal:"<<animal<<",bird:"<<bird<<endl;

	ps=animal;
	cout<<"ps:"<<ps<<endl;
	cout<<"before strcpy()"<<endl;
	cout<<animal<<" at "<<(int*)animal<<endl;
	cout<<ps<<" at "<<(int*)ps<<endl;

	ps=new char[strlen(animal)+1];
	strcpy(ps,animal);
	cout<<"after strcpy()"<<endl;
	cout<<animal<<" at "<<(int*)animal<<endl;
	cout<<ps<<" at "<<(int*)ps<<endl;

	delete [] ps;

	return 0;
}
