//C++ program to calculate SI:
#include<iostream>
using namespace std;
int main()
{
    int p,r,t,si;
    cout<<"Enter p,r,t: ";
    cin>>p>>r>>t;
    si=(p*r*t)/100;
    cout<<"SI= "<<si;
}