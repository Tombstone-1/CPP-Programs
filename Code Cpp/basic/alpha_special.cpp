//C++ program to check given input is alphabet,digit or special symbol:
#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"Enter the input: ";
    cin>>ch;
    if((ch>='a')&&(ch<='z')||(ch>='A')&&(ch<='Z'))
    {
        cout<<"Input is character";
    }
    else if((ch>='0') && (ch<='9'))
    {
        cout<<"Input is digit";
    }
    else
    {
        cout<<"Input is special character";
    }
}