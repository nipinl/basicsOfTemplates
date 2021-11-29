#include<iostream>
#include <cstring>
using namespace std;

template <typename T>
T Max(T x, T y)
{
    return x > y ? x : y;
}
template <> const char* Max(const char* x,const char* y)
{
    return strcmp(x,y)>0 ? x : y;
}

int main()
{
    cout<<Max(3,25)<<endl;
    const char * a {"A"};
    const char * b {"B"};
    cout<<Max(a,b)<<endl;
}