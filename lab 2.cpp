//№9
#include <iostream>
#include <string>
#include <math.h> // cmath
#define E 2.71828182845904523536;
using namespace std;

int main()

{

int x;
double res;
cout<<"Enter x ";
cin>>x;

if(x <= 1)
{
    cout<<"\n So, X are < or = 1 ";
    res = 0.5*cos(x)+sin(x);
    cout<<res;
}
else if(x < 0)
{
    cout<<"\n So, X are < or = 0 ";
    res = pow((0.25*x),4)+pow((2*x),2);
    cout<<res;
}
else{
    cout<<"\n So, X are > 1 ";
    res = 0.9*sqrt(x)-0.8;
    cout<<res;
}
}
