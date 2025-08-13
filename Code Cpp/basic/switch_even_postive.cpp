// Check no. is even or and positive or negative using switch cases.

#include<iostream>
using namespace std;
int main()
{
    int num,ch,i;
    cout<<"\n Operations:\n 1.Even or Odd \n 2.Positive or negative";
    cout<<"\n Enter your choice:";
    cin>>ch;
    switch(ch)
    {
        case 1:cout<<"Enter a number:";
               cin>>num;
               if(num%2==0)
               cout<<"Number is Even";
               else
               cout<<"Numberr is Odd";
               break;
               
        case 2:cout<<"Enter a number:";
               cin>>num;
               if(num>0)
               cout<<"Number is positive";
               else
               cout<<"Number is negative";   
    }
    
    
}