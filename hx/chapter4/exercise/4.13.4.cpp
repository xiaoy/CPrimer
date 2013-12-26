// --------------------------------------------
// Author: hx
// Date: 十二月-19-2013
// Note:
// ---------------------------------------------
#include <iostream>
#include <cstring>

int main(){
	using namespace std;

	string firstname;
	string lastname;

	cout<<"Enter your first name:";
	cin>>firstname;
	cout<<"Enter your last name:";
	cin>>lastname;
	firstname+=",";
	firstname+=lastname;
	cout<<"Here's the information in a single string:"<<firstname<<endl;


	return 0;
}
