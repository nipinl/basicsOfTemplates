#include<iostream>

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
//explicit specialisation for char
template<>
class prettyPrinter<char*>{
    char * data_;//pointer
    public:
    prettyPrinter(char *data):data_(data){}
    void print(){
        std::cout<<"{ "<<data_<<" }"<<std::endl;
    }
    char * getData(){
        return data_;
    }    
};

int main()
{
    int data_int = 5;
    double data_d = 5.001;
    prettyPrinter<int> pi(&data_int);
    prettyPrinter<double> pd(&data_d);
    pi.print();
    pd.print();

    /* char *p {"Hello"};
    prettyPrinter<char *> ps(p);
    ps.print(); *///make error hence call for specialisation
    char *p {"Hello"};
    prettyPrinter<char *> ps(p);
    ps.print();

    return(0);
}