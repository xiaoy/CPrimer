// --------------------------------------------
// Author: hx
// Date: 十二月-26-2013
// Note:
// ---------------------------------------------
#include <iostream>
#include <ctime>

int main(){
	using namespace std;

	cout<<"Please input an secs:"<<endl;
	float sec;
	cin>>sec;
	clock_t delay=sec*CLOCKS_PER_SEC;
	cout<<"start...\a\n";
	clock_t start=clock();
	while(clock()-start<delay);
	cout<<"Done\n";

	return 0;
}
