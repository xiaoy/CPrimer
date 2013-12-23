// --------------------------------------------
// Author: hx
// Date: 十二月-20-2013
// Note:
// ---------------------------------------------
#include <iostream>
#include <cstring>

int main(){
	using namespace std;

	string word;
	cout<<"Enter a word first;"<<endl;
	cin>>word;

	for(int i=word.size()-1;i>=0;i--)
		cout<<word[i];
	cout<<"\nbye.\n";

	return 0;
}
