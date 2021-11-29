#include<iostream>
#include<vector>

template<typename T, int columns>
class prettyPrinter{
    T * data_;
    public:
    prettyPrinter(T *data):data_(data){}
    void print(){
        std::cout<<"Columns = "<<columns<<std::endl;
        std::cout<<"{ "<<*data_<<" }"<<std::endl;
    }
    T * getData(){
        return data_;
    }    
};
//partial specialisation
template<typename T>
class prettyPrinter<T,80>{
    T * data_;
    public:
    prettyPrinter(T *data):data_(data){}
    void print(){
        std::cout<<"Using 80 columns : "<<std::endl;
        std::cout<<"{ "<<*data_<<" }"<<std::endl;
    }
    T * getData(){
        return data_;
    }
};

int main()
{
    int data = 800;
    prettyPrinter<int,40> p(&data);
    p.print();
    prettyPrinter<int,80> p1(&data);
    p1.print();
    return(0);
}