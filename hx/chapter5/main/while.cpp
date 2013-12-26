// --------------------------------------------
// Author: hx
// Date: 十二月-26-2013
// Note:
// ---------------------------------------------
#include <iostream>

int main(){
	using namespace std;

	int ArSize=20;
	char name[ArSize];

	cout<<"Please input your name:"<<endl;
	cin>>name;
	cout<<"here is your name and ASCII:"<<endl;
	int i=0;
	while(name[i]!='\0'){
		cout<<name[i]<<",ASCII is "<<int(name[i])<<endl;
		i++; //important step,otherwise,the program only output the first letter
	}

	return 0;
}
