#include<iostream>
using namespace std;

class A
{
    public:
    int *p;          

    A(int x)                 //dynamic constructor
    {
        p = new int;        //dynamic memory allocation
        *p = x;             //assigning value
    }
};

int main()
{
    A obj1(10);          //dynamic constructor called
    cout<<"Value : "<<*obj1.p<<endl;

    return 0;   
}
