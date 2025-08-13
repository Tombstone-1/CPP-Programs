//C++ program to check max number among three:
#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter three numbers: ";
    cin>>a>>b>>c;
    if(a>b)
    {
        if(a>c)
        {
          cout<<"First is max";    
        }
        else
        {
            cout<<"Third is max";
        }
   }
   else
   {
           if(b>c)
           {
               cout<<"Second is max";
        }
        else
        {
            cout<<"Third is max";
        }
   }
}