// --------------------------------------------
// Author: hx
// Date: 十二月-20-2013
// Note:
// ---------------------------------------------
#include <iostream>

int main(){
	using namespace std;

	string word;
	char temp;
	int i,j;

	cout<<"Enter a word first:"<<endl;
	cin>>word;

	for(j=0,i=word.size()-1;j<i;--i,++j){
	    temp=word[i];
		word[i]=word[j];
		word[j]=temp;
	}

	cout<<word<<"Done!"<<endl;

	return 0;
}
