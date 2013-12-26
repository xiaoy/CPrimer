// --------------------------------------------
// Author: hx
// Date: 十二月-19-2013
// Note:
// ---------------------------------------------
#include <iostream>
#include <cstring>


int main(){
	using namespace std;
	const int size=20;
	char firstname[size];
	char lastname[size];
	char name[size*2+1];

	cout<<"Enter your first name:";
	cin.getline(firstname,size);
	cout<<"Enter your last name:";
	cin.getline(lastname,size);
	strcat(firstname,",");
	strcat(firstname,lastname);
	//cout<<"Here's the information in a single string:"<<firstname<<", "<<lastname<<'\n';
	cout<<"Here's the information in a single string:"<<firstname<<'\n';


	return 0;
}
