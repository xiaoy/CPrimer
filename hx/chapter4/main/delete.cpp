// --------------------------------------------
// Author: hx
// Date: 十二月-19-2013
// Note:
// ---------------------------------------------
#include <iostream>
#include <cstring>

using namespace std;  //global inaction
char * getname(void); //statement before use

int main(){
	

	char * name;
	name=getname();
	cout<<"name:"<<name<<" at "<<(int *)name<<endl;
	delete [] name;

	name=getname();
	cout<<"name:"<<name<<" at "<<(int *)name<<endl;
	delete [] name;

	return 0;
}

char * getname(){
	char temp[80];

	cout<<"Enter the last name first:"<<endl;
	cin>>temp;

	char * pn=new char[strlen(temp)+1];
	strcpy(pn,temp);
	cout<<"pn:"<<pn<<" at "<<(int*)pn<<endl;
	return pn;
}