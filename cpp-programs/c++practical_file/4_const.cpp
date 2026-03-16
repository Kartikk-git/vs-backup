#include<iostream>
using namespace std;

int main()
{
  const int a = 10; // have to initialise with value or it will take garbage value
  cout<<" const A : "<<a<<endl;
  // a = 20;        cannot update 
  // cout<<" const A :"<<a<<endl:
  
  int b = 10;
  cout<<" B : "<<b<<endl;
  b = 20;     // can update
  cout<<" B : "<<b<<endl;

  return 0;
}