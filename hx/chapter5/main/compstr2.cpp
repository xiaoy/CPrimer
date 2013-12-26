// --------------------------------------------
// Author: hx
// Date: 十二月-26-2013
// Note:
// ---------------------------------------------
#include <iostream>
#include <cstring>

int main(){
	using namespace std;

	string word="?ate";

	//word!= "mate"  string compare string
	for(char ch='a';word != "mate";ch++){
		cout<<"word:"<<word<<endl;
		word[0]=ch;
	}
	cout<<"word:"<<word<<endl;

	return 0;
}
