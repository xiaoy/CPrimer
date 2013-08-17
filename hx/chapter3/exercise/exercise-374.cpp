// --------------------------------------------
// Author: hx
// Date: 八月-17-2013
// Note:
// ---------------------------------------------
#include <iostream>

int main(){
	using namespace std;

	long mounts;
	int day;
	int hour;
	int minute;
	int second;

	cout<<"input the seconds:";
	cin>>mounts;

	day=mounts/(24*60*60);
	hour=mounts%(24*60*60)/(60*60);
	minute=(mounts%(24*60*60))%(60*60)/60;
	second=(mounts%(24*60*60))%(60*60)%60;

	cout<<day<<" days,"<<hour<<" hours,"<<minute<<" minute,"<<second<<" second"<<endl;

	return 0;
}