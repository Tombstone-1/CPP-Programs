// calculate factorial
#include<iostream>
using namespace std;
int main()
{
    int num,fact=1;
    for(num=6;num>0;num--)
    {
        cout<<num;
        fact=fact*num;
    }
	cout<<"Factorial= "<<fact;
}