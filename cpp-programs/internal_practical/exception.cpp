#include<iostream>
using namespace std;

int main(){
    int a,b;
    cout<<"Enter a and b :";
    cin>>a>>b;
    try
    {
        if(b==0){
            throw b;
        }
        cout<<"result: "<<a/b<<endl;
    }
    catch(int i)
    {
        cout<<"Zero Division error, can't divide by Zero"<<endl;
    }
    return 0;
}