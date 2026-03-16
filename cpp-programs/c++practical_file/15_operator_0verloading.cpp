#include<iostream>
using namespace std;

class demo{
    int a;
    public:

    void getdata()                     //member function
    {
        cout<<"Enter the value : ";
        cin>>a;
    }

    void putdata()                     //member function    
    {
        cout<<"The value is: "<<a<<endl;
    }

    demo operator +(demo bb)        //operator overloading function
    {
        demo cc;                    //creating a temporary object
        cc.a = a + bb.a;            //adding the values of two objects
        return cc;                  //returning the temporary object
    }
};

int main()
{
    demo aa, bb, cc;          
    aa.getdata();
    bb.getdata();

    cc = aa + bb;               //invoking operator overloading function

    aa.putdata();
    bb.putdata();
    cc.putdata();

    return 0;

}