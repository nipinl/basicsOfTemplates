#include<iostream>
using namespace std;

// Function to calculate sum of an array
template <class T, int size>
T Sum(T (&parr)[size])
{
    T s{};//initialis s to zero
    for (int i = 0; i < size; i++) {
        s += parr[i];
    }
    return s;
}
int main ()
{
    int a[] = {2,6,7,3};
    cout<<"Sum = "<<Sum(a)<<endl;
}