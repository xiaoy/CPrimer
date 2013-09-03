// -------------------------------------------------------------------
// Author: lfwu
// Date: September-03-2013
// Note:
// Email:zgwulongfei@gmail.com
// Blog:http://blog.csdn.net/hackmind
// -------------------------------------------------------------------
#include <iostream>
#include <vector>
using namespace std;

int
main(int argc, char** argv) {
    // Input the number count
    int num_count = 0;
    cout<<"The count of your num:";
    cin>>num_count;

    // Get the input number
    int num = 0;
    vector<int> num_vec;
    while(num_count > 0) {
        num_count -= 1;
        cin>>num;
        num_vec.push_back(num);
    }

    if(num_vec.size() <= 0) {
        return 0;
    }

    // Get the first and last index
    size_t rindex = num_vec.size() - 1;

    // Print the first and last sum
    for(size_t index = 0; index < num_vec.size(); ++index) {
        if(index > rindex) {
            break;
        }

        if(index == rindex) {
            cout<<num_vec[index]<<endl;
            break;
        }

        int num_begin = num_vec[index];
        int num_end = num_vec[rindex];
        cout<<num_begin<<" + "<<num_end<<" = "<<(num_begin + num_end)<<endl;

        rindex -= 1;
    }
    return 0;
}
