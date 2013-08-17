#include <iostream>
#include <climits>

int main(){
    using namespace std;
    int n_int=INT_MAX;
    short   n_short=SHRT_MAX;
    long n_long=LONG_MAX;
    long long n_llong=LLONG_MAX;
    int c11_test={123};
    int c11_test1{1234};

    cout<<"int is "<<sizeof(int)<<" bytes"<<endl;
    cout<<"short is "<<sizeof n_short<<" bytes"<<endl;
    cout<<"long is "<<sizeof n_long<<" bytes"<<endl;
    cout<<"long long is "<<sizeof n_llong<<" bytes"<<endl;

    cout<<"Max Values:"<<endl;
    cout<<"int max:"<<n_int<<endl;
    cout<<"short max:"<<n_short<<endl;
    cout<<"long max:"<<n_long<<endl;
    cout<<"longlong max:"<<n_llong<<endl;

    cout<<"minum values:"<<INT_MIN<<endl;
    cout<<"charts per byte:"<<CHAR_BIT<<endl;

    //test c++11
    cout<<"c11_test:"<<c11_test<<endl;
    cout<<"c11_test1:"<<c11_test1<<endl;

    return 0;
}