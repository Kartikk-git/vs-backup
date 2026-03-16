#include<iostream>
using namespace std;
class student
{
    public:
    string name;
    int roll,age;
    void get_data()
    {
        cout<<"Enter Student details:"<<endl;
        cout<<"Name :";
        cin>>name;
        cout<<"Age : ";
        cin>>age;
        cout<<"Roll number :";
        cin>>roll;
    }
    void show_data()
    {
        cout<<name<<" Age: "<<age<<" Roll Numeber: "<<roll<<endl;
    }
};

int main()
{
    student s1,s2,s3;
    s1.get_data();
    s2.get_data();
    s3.get_data();

    cout<<"Student Details: "<<endl;
    s1.show_data();
    s2.show_data();
    s3.show_data();
    
    return 0;
}