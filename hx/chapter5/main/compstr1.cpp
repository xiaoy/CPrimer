// --------------------------------------------
// Author: hx
// Date: 十二月-26-2013
// Note:
// ---------------------------------------------
#include <iostream>
#include <cstring>

int main(){
	using namespace std;

	char word[5]="?ate";

	//strcmp(word,"mate") is the end of for 
	for(char ch='a';strcmp(word,"mate");ch++){
		cout<<word<<endl;
		word[0]=ch;
	}

		cout<<"word:"<<word<<endl;
	return 0;
}
