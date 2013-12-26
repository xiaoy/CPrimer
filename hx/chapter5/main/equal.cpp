// --------------------------------------------
// Author: hx
// Date: 十二月-26-2013
// Note:
// ---------------------------------------------
#include <iostream>

int main(){
	using namespace std;

	int quize[10]={20,20,20,20,20,19,20,18,20,17};
	int i;

	for(i=0;quize[i]==20;i++)
		cout<<"quize["<<i<<"]="<<quize[i]<<endl;
	cout<<"---------------------------"<<endl;
	for(i=0;quize[i]=20;i++) //= is inilisization,bounds error
		cout<<"i"<<i<<",quize["<<i<<"]="<<quize[i]<<endl;

	return 0;
}
