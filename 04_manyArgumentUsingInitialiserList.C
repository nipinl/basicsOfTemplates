#include<iostream>

template <typename T>
void print(std::initializer_list<T> args)
{
    for (const auto &x:args) {
        std::cout<<x<<" ";
    }
}
int main ()
{
    print({1,2.1,3,4});
    return 0;
}