// --------------------------------------------
// Author: hx
// Date: 八月-17-2013
// Note:
// ---------------------------------------------

#include <iostream>

int main(){
	using namespace std;
	int foot;
	int inch;
	int  bounds;
	const int foot_inch=12;
	const float bounds_kg=2.2;
	const float foot_m=0.0254;

	cout<<"input your height of inch:";
	cin>>inch;
	cout<<endl<<"input your height of foot:";
	cin>>foot;
	cout<<endl<<"input your weight(bounds)";
	cin>>bounds;

	float m=(inch*foot_inch+foot)*foot_m;
	float kg=bounds*bounds_kg;
	float squart_bmi=m/kg;

	cout<<"******************"<<endl;
	cout<<"convert to m"<<m<<endl;
	cout<<"convert to kg"<<kg<<endl;
	cout<<"squart_bmi"<<squart_bmi<<endl;
	cout<<"******************"<<endl;
	cout<<"BMI="<<squart_bmi*squart_bmi<<endl;

	return 0;
}