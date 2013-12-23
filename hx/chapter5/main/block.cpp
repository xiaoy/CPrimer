// --------------------------------------------
// Author: hx
// Date: 十二月-20-2013
// Note:
// ---------------------------------------------
#include <iostream>

int main(){
	using namespace std;

	double number;
	double sum=0.0;
	cout<<"Enter five number first:"<<endl;
	for(int i=0;i<5;i++){
		cout<<"Vaule "<<i<<":"<<endl;
		cin>>number;
		sum+=number;
	}

	cout<<"sum of the number is :"<<sum<<endl;
	cout<<"average of the number is:"<<sum/5<<endl;


	return 0;
}
