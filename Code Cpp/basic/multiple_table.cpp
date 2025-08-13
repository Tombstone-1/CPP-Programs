//C++ program to print multiplication table using do-while loop:
#include<iostream>
using namespace std;
int main()
{
    int i=1,n;
    cout<<"Enter any number: ";
    cin>>n;
    do{
        cout<<"\n"<<n*i;
        i++;
      }while(i<=10);
}