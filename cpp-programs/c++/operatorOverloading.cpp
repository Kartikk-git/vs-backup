#include<iostream>
using namespace std;
class demo{
    int a;
    public:
    void getdata(){
        cout<<"Enter the value : ";
        cin>>a;
    }
    void putdata()
    {
        cout<<"The value is: "<<a<<endl;
    }

    demo operator +(demo bb){
        demo cc;
        cc.a = a + bb.a;
        return cc;
    }
};

int main(){
    demo aa, bb, cc;
    aa.getdata();
    bb.getdata();
    cc = aa + bb;
    aa.putdata();
    bb.putdata();
    cc.putdata();
    return 0;

}