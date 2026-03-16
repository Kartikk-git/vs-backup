#include<iostream>
using namespace std;

class A
{
    public:
    int x;

    explicit A(int a)          //explicit constructor
    {
        x = a;
    }
};

int main()
{
    A obj1(10);               //valid
    //A obj2 = 20;            //invalid as constructor is explicit

    cout<<"Value of x in obj1 : "<<obj1.x<<endl;

    return 0;
}