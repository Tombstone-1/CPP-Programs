// calculate power 
#include<iostream>
using namespace std;
int main()
{
    int b,e,p=1;
    cout<<"Enter base and exponant: ";
    cin>>b>>e;
    while(e>0)
    {
        p=p*b;
        e--;
    }cout<<"\npower="<<p;
}