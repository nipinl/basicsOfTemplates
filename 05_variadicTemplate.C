#include<iostream>
//base function for exiting the loop
void Print()
{
    std::cout<<std::endl;
};
//template parameter pack
template <typename T, typename...Params>
//Function parameter pack
void Print(const T& a, const Params&... args)
{
    std::cout<<a;
    if(sizeof...(args)>0){
        std::cout<<", ";
    }
    Print(args...);//recursive call
}

int main ()
{
    Print(1,2.1,3,4);
    return 0;
}