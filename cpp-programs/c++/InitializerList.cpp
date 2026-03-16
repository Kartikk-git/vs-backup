#include<iostream>
using namespace std;

class demo
{
    public:
    int x;
    const int y;
    int &z;
    demo(int a, int b, int &c) : x(a), y(b), z(c)
    {}
    void show_data(){
        cout<<"x: "<<x<<endl;
        cout<<"y: "<<y<<endl;
        cout<<"z: "<<z<<endl;
    }
};

int main()
{
    int p =10, q=20, r=30;
    demo obj(p, q, r);
    obj.show_data();
    return 0;
}