// cpp porogram to calculate simple interest

#include<iostream>
using namespace std;
int si,p,n,r;
int main()
{
    int SI(int p,int r,int n);
    cout<<"Enter p,n,r:";
    cin>>p>>n>>r;
    SI(p,n,r);
    cout<<"SImple interest = "<<si;
    
}
int SI(int p,int n,int r)
{
    return si=(p*n*r)/100;    
}