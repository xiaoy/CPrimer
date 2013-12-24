// -------------------------------------------------------------------
// Author: lfwu
// Date: December-22-2013
// Note:
// Email:zgwulongfei@gmail.com
// Blog:http://blog.csdn.net/hackmind
// -------------------------------------------------------------------
#include <iostream>
#include <algorithm>
#include <ctime>
using namespace std;

template <class T>
void PrintContainer(T& con, char det= ' ') {
    for(auto it = con.cbegin(); it != con.cend(); ++it)
        cout << *it << det;
}

template<class T>
void CreateSeq(T& con, int start, int end) {
    while(start <= end) {
        con.push_back(start);
        start += 1;
    }
}

static int seed = time(nullptr);
int GetRandNum(int min, int max) {
    srand(seed);
    seed = rand();
    return (min + seed)%(max - min + 1);
}

template <class T>
void CreateRandSeq(T& con, size_t len, int min, int max) {
    size_t i = 0;
    while(i++ < len) {
        con.push_back(GetRandNum(min, max));
    }
}
