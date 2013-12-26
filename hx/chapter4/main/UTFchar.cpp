// --------------------------------------------
// Author: hx
// Date: 十二月-19-2013
// Note:
// ---------------------------------------------
#include <iostream>
#include <cstdint>

int main(){
	using namespace std;

	char16_t name[]=u"Fliva Ripova";
	char32_t car[]=U"Humber SUper SNipe";

	/*there isnot a right std_method output char16_t/char32_t*/
	cout<<"char16_t name :"<<name<<" and name[1]:"<<name[1]<<" and sizeof element:"<<sizeof name[1]<<" and sizeof array:"<<sizeof name<<endl;
	cout<<"char32_t car :"<<car<<" and car[1]:"<<car[1]<<" and sizeof element:"<<sizeof car[1]<<" and sizeof array:"<<sizeof car<<endl;
	

	cout<<R"(JIm "King" Tutt users "\n" insteda of endl)"<<'\n';
	cout<<R"+*("(Who wouldn't?)",she whispered.)+*"<<endl;

	return 0;
}
