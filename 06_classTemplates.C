#include<iostream>
template <typename T>
class Stack
{
    T m_Buffer[512];
    int m_Top{-1};
public:
//Default constructor
    Stack() = default;
//Copy constructor
    Stack(const Stack<T>& s){
        m_Top = s.m_Top;
        for(int i=0;i<=m_Top;++i){
            m_Buffer[i] = s.m_Buffer[i];
        }
    }
//factory metho for making Stack
    static Stack Create();    

    void Push(const T& elem)
    {
        m_Buffer[++m_Top] = elem;
    }
    const T& Top()
    {
        return m_Buffer[m_Top];
    }
    void Pop();
    bool isEmpty();
};
template<typename T>
void Stack<T>::Pop()
{
    --m_Top;
}
template<typename T>
bool Stack<T>::isEmpty()
{
    return m_Top==-1;
}
template <typename T>
Stack<T> Stack<T>::Create()
{
   return Stack<T>(); 
} 

int main ()
{
    Stack<float>s1 = Stack<float>::Create();
    std::cout<<s1.isEmpty()<<std::endl;
    Stack<int> s;
    s.Push(-5);
    s.Push(7);
    s.Push(9);
    s.Push(-1);
    s.Push(0);
    auto s2(s);//using copy constructor
    while( !s2.isEmpty())
    {
        std::cout<<s2.Top()<<std::endl;
        s2.Pop();
    }
    return 0;
}