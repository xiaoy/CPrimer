// --------------------------------------------
// Author: hx
// Date: 十二月-17-2013
// Note:
// ---------------------------------------------
#include <iostream>

int main(){
	using namespace std;

	char name[20];
	int age;

	cout<<"what's your name?"<<endl;
	cout<<"my name is ";
	cin>>name;
	cout<<"and how old are you?"<<endl;
	cout<<"i'm ";
	cin>>age;
	cout<<"my name is "<<name<<" and i'm "<<age<<endl;
	cout<<"getline()\n"; //because of this  '\n',you cannot input your answer
	cin.get(); //before getline,you can use get() to eat '\n'
	cin.getline(name,20);

	return 0;
}
