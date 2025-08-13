//C++ program to calculate factorial and power switch case.
#include<iostream>
using namespace std;
int main()
{
    int f=1,n,b,e,p=1,ch;
    cout<<"\n Menu: \n 1. Factorial \n 2. Power"<<endl;
    cout<<"\n Enter your choice :";
    cin>>ch;
    switch(ch)
    {
        case 1: cout<<"\n Enter any number :";
                cin>>n;
                while(n>0)
                {
                    f=f*n;
                    n--;
                }
                cout<<"\n Factorial = "<<f;
                break;
                
        case 2: cout<<"\n Enter base and exponant :";
                cin>>b>>e;
                while(e>0)
                {
                    p=p*b;
                    e--;    
                }
                cout<<"\n Power = "<<p;
                break;    
    
}
}