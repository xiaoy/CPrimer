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
	int k=0;

	for(j=0,i=word.size()-1;j<i;--i,++j){
	    temp=word[i];
	    //cout<<"temp:"<<temp<<",i="<<i<<",word[i]:"<<word[i]<<",j="<<j<<",word[j]:"<<word[j]<<endl;
		word[i]=word[j];
		//cout<<"temp:"<<temp<<",i="<<i<<",word[i]:"<<word[i]<<",j="<<j<<",word[j]:"<<word[j]<<endl;
		word[j]=temp;
		//cout<<"temp:"<<temp<<",i="<<i<<",word[i]:"<<word[i]<<",j="<<j<<",word[j]:"<<word[j]<<endl;
		cout<<"k="<<k++<<endl;
	}

	cout<<word<<"\nDone!"<<endl;

	return 0;
}
