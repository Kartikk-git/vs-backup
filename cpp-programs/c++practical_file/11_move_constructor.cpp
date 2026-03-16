#include<iostream>
using namespace std;

class A
{
    public:
    int *p;

    A(int x)                   //parameterized constructor
    {
        p = new int;           //dynamic memory allocation 
        *p = x;
        cout<<"Parameterized constructor called"<<endl;
    }

    A( A && obj)               //move constructor
    {
        p = obj.p;             //stealing the resource
        obj.p = nullptr;       //nullifying the source pointer
        cout<<"Move constructor called"<<endl;
    }
};

int main()
{
    A ob1(10);
    A ob2 = move(ob1);          //invoking move constructor
    cout<<"ob2.p value :"<<*ob2.p<<endl;
    if(ob1.p == nullptr)
    {
        cout<<"ob1.p is now NULL (moved to ob2.p)"<<endl;
    }

    return 0;
}