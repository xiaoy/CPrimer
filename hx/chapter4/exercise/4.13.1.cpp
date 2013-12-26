// --------------------------------------------
// Author: hx
// Date: 十二月-19-2013
// Note:
// ---------------------------------------------
#include <iostream>

int main(){
	using namespace std;

	char first_name[20];
	char last_name[20];
	char grade;
	int age;

	cout<<"What's your first name?"<<endl;
	cin>>first_name;
	cout<<"What's your last name"<<endl;
	cin>>last_name;
	cout<<"What letter grade do you deserve?"<<endl;
	cin>>grade;
	cout<<"What's your age?"<<endl;
	cin>>age;
	cout<<"Name:"<<first_name<<","<<last_name<<endl;
	cout<<"Grade:"<<static_cast<char>(static_cast<int>(grade)+1)<<endl;
	cout<<"Age:"<<age<<endl;

	return 0;
}
