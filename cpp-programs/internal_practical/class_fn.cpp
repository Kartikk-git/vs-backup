#include<iostream>
using namespace std;

class A
{
    public:
    int x;

    void get_data()
    {
        cout<<"Enter the value :";
        cin>>x;
    }

    void show_data()
    {
        cout<<"Value of X : "<<x;
    }
};

int main()
{
    A obj;
    obj.get_data();
    obj.show_data();
    return 0;
}