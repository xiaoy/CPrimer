// --------------------------------------------
// Author: hx
// Date: 十二月-20-2013
// Note:
// ---------------------------------------------
#include <iostream>

const int ArSize=16;

int main(){
	using namespace std;

	long long fab[ArSize];

	fab[1]=fab[0]=1LL;
	for(int i=2;i<ArSize;i++)
		fab[i]=i*fab[i-1];
	for(int i=0;i<ArSize;i++)
		cout<<i<<"!="<<fab[i]<<endl;

	return 0;
}
