#include <iostream>
int main(){
    using namespace std;
    int head,tail;

    cout<<"enter an head number:"<<endl;
    cin>>head;
    cout<<"enter an tail number:"<<endl;
    cin>>tail;

    cout<<"plus:head+tail="<<head+tail<<endl;
    cout<<"minus:head-tail="<<head-tail<<endl;
    cout<<"multiply:head*tail="<<head*tail<<endl;
    cout<<"division:head/tail="<<head/(tail=0?1:tail)<<endl;

    return 0;

}