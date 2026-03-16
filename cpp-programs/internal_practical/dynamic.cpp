#include<iostream>
using namespace std;

class A
{
    public:
    int *p;          

    A(int x)                 
    {
        p = new int;        
        *p = x;             
    }
};

int main()
{
    A obj1(10);          
    cout<<"Value : "<<*obj1.p<<endl;

    return 0;   
}
