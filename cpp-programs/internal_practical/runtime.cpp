#include<iostream>
using namespace std;

class A 
{
    public:
    void fun()   
    {
        cout<<"class A."<<endl;
    }
};

class B : public A
{
    public:
    void fun()
    {
        cout<<"class B."<<endl;
    }
};

int main()
{
    A *ptr;  
    B obj;
    
    ptr = &obj;
    ptr -> fun();

    return 0;
}