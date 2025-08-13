//cpp program for sum of digits

#include<iostream>
using namespace std;
int sum=0;
int main()
{
    int num;
    int sumofdigits(int num);
    cout<<"Enter a number:";
    cin>>num;
    sum=sumofdigits(num);
    cout<<"sum of digits = "<<sum;
}
int sumofdigits(int num)
{
    int rem;
    while(num>0)
    {
        rem=num%10;
        num=num/10;
        sum=sum+rem;
    }
    return sum;
}