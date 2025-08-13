//C++ program to calculate sum of digit using while loop:
#include<iostream>
using namespace std;
int main()
{
    int n,r,s=0;
    cout<<"Enter any number: ";
    cin>>n;
    while(n>0)
    {
        r=n%10;
        n=n/10;
        s=s+r;
    }
    cout<<"Sum of digit: "<<s;
}