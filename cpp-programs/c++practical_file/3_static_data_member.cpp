#include<iostream>
using namespace std;

class stats
{
    public:
    int a;
    static int b;

    stats(int x,int y)       //parameterized constructor
    {
        a = x;
        b = y;
    }

    void display()
    {  
        cout<<" A : "<<a<<endl;
        cout<<" B : "<<b<<endl;
    }

    static void print()       //static member function
    {
        //cout<<" A : "<<a<<endl; error: static member function cannot access non-static data member
        cout<<" B : "<<b<<endl;
    }
};

int stats :: b=0; //static data member initialization


int main()
{
    stats obj(10,20);

    obj.display();
    obj.print();

    return 0;

}