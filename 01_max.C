#include<iostream>
using namespace std;

template <typename T>
T Max(T x, T y)
{
    return x > y ? x : y;
}

int main()
{
    cout<<Max(3,25)<<endl;
}

