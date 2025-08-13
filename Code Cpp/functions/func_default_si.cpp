// si using function default value
// func instilization is not needed.
//Calculate simple interest using default arguments
#include<iostream>
using namespace std;
int si(int p,int n,int r=10)  // have to mention overload value at last only
{
    return (p*n*r)/100;
}
int main()
{
    int p,n;
    cout<<"\n Simple interest = "<<si(15000,12);
    cout<<"\n Simple interest = "<<si(25000,15);
    cout<<"\n Simple interest = "<<si(10000,10);
}
/*    int si(int p,int r=10,int n)        //invalid
      int si(int r=10,int p,int n)        //invalid
      int si(int p,int n,int r=10)        //valid                */