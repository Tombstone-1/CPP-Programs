//inline function
#include<iostream>
using namespace std;
inline int max(int a,int b)
{
    return (a>b)?a:b;            //write function definition block in one line
}
int main()
{
    int a,b;
    cout<<"\n Maximum no: "<<max(15,56);
    cout<<"\n Maximum no: "<<max(87,56);
    cout<<"\n Maximum no: "<<max(23,1);
}
/*1. inline keyword
2. write function definition block in one line  */