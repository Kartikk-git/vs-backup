#include<iostream>
using namespace std;

class A 
{
    public:
    void fun()     // if we put virtual keyword here then class B's fun() will be called
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