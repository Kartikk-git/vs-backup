#include<iostream>
using namespace std;

class base
{
    public:
    base()
    {
        cout<<"base class"<<endl;
    }
};

class derived1 : virtual public base
{
    public:
    derived1()
    {
        cout<<"derived class 1"<<endl;
    }
};

class derived2 : virtual public base
{
    public:
    derived2()
    {
        cout<<"derived class 2"<<endl;
    }
};

class derived3 : public derived1, public derived2
{
    public:
    derived3()
    {
        cout<<"derived class 3"<<endl;
    }
};

int main()
{
    derived3 d3;
    return 0;
}
