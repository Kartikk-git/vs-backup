#include<iostream>
using namespace std;

class vehicle
{
    public:
    vehicle()
    {
        cout<<"This is a Vehicle."<<endl;
    }
};

class four_doors : public vehicle
{
    public:
    four_doors()
    {
        cout<<"This Vehicle has Four Doors."<<endl;
    }
};

class car : public four_doors
{
    public:
    car()
    {
        cout<<"This Four Door Vehicle is a Car."<<endl;
    }
};

class city_car : public car
{
    public:
    city_car()
    {
        cout<<"This Car is a City Car."<<endl;
    }
};

int main()
{
    city_car obj;

    return 0;
}