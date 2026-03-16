#include<iostream>
using namespace std;

class demo
{
    public:
    int x;
    const int y;
    int &z;         //reference data member

    demo(int a, int b, int &c) : x(a), y(b), z(c)   //initializer list
    {}

    void show_data()
    {                       
        cout<<"x: "<<x<<endl;
        cout<<"y: "<<y<<endl;
        cout<<"z: "<<z<<endl;
    }
};

int main()
{
    int p =10, q=20, r=30;    
    demo obj(p, q, r);          //object creation using initializer list
    obj.show_data();

    return 0;
}