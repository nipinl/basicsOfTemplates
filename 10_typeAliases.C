#include<iostream>
#include<vector>
#include<list>

const char *getErrorMessage(int errNo){
    return "A message !!";
}
typedef const char *(*PFN1)(int);
using PFN2 = const char *(*)(int);
void showError (PFN1 p){
    std::cout<<p<<std::endl;
}
typedef std::vector<std::list<std::string>> Names;
using Namez = std::vector<std::list<std::string>>;
template <typename T>
using NamezT = std::vector<std::list<T>>;
int main()
{
    PFN1 p = getErrorMessage;
    showError(p);
    Names names;
    Namez namez;
    NamezT<std::string> sNames;
    return(0);
}