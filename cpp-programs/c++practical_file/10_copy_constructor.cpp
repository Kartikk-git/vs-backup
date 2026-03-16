#include<iostream>
using namespace std;

class student
{
    public:
    string name;
    int age;
    
    student(string n, int a)    // parameterized constructor
    {
        name = n;
        age = a;
    }

    student(const student &s)   // copy constructor
    {
        name = s.name;
        age = s.age;
    }

    void display()             // member function
    {
        cout<<"Name : "<<name<<" Age : "<<age<<endl;
    }
};

int main()
{
    student s1("kartik",19);
    student s2 = s1;           // invoking copy constructor

    cout<<"Student Details:"<<endl;
    s1.display();
    s2.display();

    return 0;
}