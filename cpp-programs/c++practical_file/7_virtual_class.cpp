#include<iostream>
using namespace std;

class animal
{
    public:
    animal()
    {
        cout<<"These are Animals."<<endl;
    }
};

class terrestrial : virtual public animal         //if we do not use virtual here then class animal will be called twice
{
    public:
    terrestrial()
    {
        cout<<"These Animals live on Land."<<endl;
    }
};

class aquatic : virtual public animal
{
    public:
    aquatic()
    {
        cout<<"These Animals live in Water."<<endl;
    }
};

class amphibians : public terrestrial, public aquatic
{
    public:
    amphibians()
    {
        cout<<"These Animals can live both on Land and in Water."<<endl;
    }
};

int main()
{
    amphibians obj;

    return 0;
}