// --------------------------------------------
// Author: hx
// Date: 八月-17-2013
// Note:
// ---------------------------------------------
#include <iostream>

int main(){
	using namespace std;
	int s;
	int litre;
	const float km_inm=1.609344;
	const float litre_calon=3.785411;
	
	cout<<"input your travelled:";
	cin>>s;
	cout<<"input your litre of petro:";
	cin>>litre;

	cout<<"************************"<<endl;
	cout<<"路程:"<<s<<"(km)   "<<s/km_inm<<"(inm)"<<endl;
	cout<<"油耗量"<<litre<<"(L)    "<<litre/litre_calon<<"(calon)"<<endl;
	cout<<"************************"<<endl;

	float percent=(litre/litre_calon)/(s/km_inm);
	cout<<"percent="<<percent<<"(calon/inm)"<<endl;
	cout<<"Per="<<percent*100<<"(calon/100*inm)"<<endl;
	cout<<"PEr1="<<percent*100*(litre_calon/km_inm)<<"(L/km)"<<endl;


	return 0;
}
