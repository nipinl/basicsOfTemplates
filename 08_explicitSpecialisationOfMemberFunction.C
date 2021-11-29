#include<iostream>
#include<vector>

template<typename T>
class prettyPrinter{
    T * data_;//pointer
    public:
    //constructor with initialiser
    prettyPrinter(T *data):data_(data){}
    void print(){//printing the value by dereferencing pointer
        std::cout<<"{ "<<*data_<<" }"<<std::endl;
    }
    T * getData(){
        return data_;//return the pointer
    }    
};
//only print function needs to be modified
template<>
void prettyPrinter<std::vector<int>>::print(){
    std::cout<<"{ ";
    for (const auto & x: *data_){
        std::cout<<x;
    }
    std::cout<<"}";
}

int main()
{
    std::vector<int> v {1,2,3,4,5};
    prettyPrinter<std::vector<int>> pv(&v);
    pv.print();
    return(0);
}