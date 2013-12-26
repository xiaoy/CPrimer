// --------------------------------------------
// Author: hx
// Date: 十二月-18-2013
// Note:
// ---------------------------------------------
#include <iostream>


int main(){
	using namespace std;

	wchar_t title[]=L"Chief Astrogator换行符";

	wcout<<"wchar_t title :"<<title<<" and title[1]:"<<title[1]<<" and sizeof element:"<<sizeof title[1]<<" and sizeof array:"<<sizeof title<<endl;
	/*there isnot a right std_method output char16_t/char32_t*/

	
	return 0;
}
