//function : default arguments
// method overloading

#include<iostream>
using namespace std;
int sum(int a,int b,int c=0,int d=0)
{
    return a+b+c+d;
}
int main()
{
    int a,b;
    cout<<"\n Addition = "<<sum(10,20,30);
    cout<<"\n Addition = "<<sum(10,45);
    cout<<"\n Addition = "<<sum(45,7,9,8);
    cout<<"\n Addition = "<<sum(7,2,6);
}