#include<iostream>
using namespace std;

class student
{
    public:
    int age,roll;
    string name;
    
    student(string n,int a,int r)          //parametrized constructor
    {
        name = n;
        age = a;
        roll = r;
    }

    void get_data()                        //memeber function
    {
        cout<<"Name : "<<name<<endl;
        cout<<" Age : "<<age<<" Roll number : "<<roll<<endl;
    }
};

int main()
{
    student s1("Kartik",19,85);
    student s2("Harsh",19,80);
    student s3("Jay",20,65);

    cout<<"Student Details:"<<endl;
    s1.get_data();
    s2.get_data();
    s3.get_data();

    return 0;
}
