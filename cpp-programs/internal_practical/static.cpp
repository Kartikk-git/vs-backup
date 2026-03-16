#include<iostream>
using namespace std;

class statics
{
    public:
    int a;
    static int b;            
    statics(int x,int y)      
    {
        a = x;
        b = y;
    }

    void display()          
    {
        cout<<"A : "<<a<<endl;
        cout<<"B : "<<b<<endl;
    }

    static void print()        
    {
        //cout<<"A : "<<a<<endl;     
        cout<<"B : "<<b<<endl;
    }
};

int statics :: b = 0;            

int main()
{
    statics obj(10,20);
    obj.display();
    obj.print();
    return 0;
}