#include<iostream>
using namespace std;

class terrestrial
{
    public:
    terrestrial()
    {
        cout<<"These Animals live on Land."<<endl;
    }
};

class aquatic
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