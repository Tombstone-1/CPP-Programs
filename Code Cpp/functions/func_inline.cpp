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
    if(max(45,23))
    cout<<"\n a is max";
    else
    cout<<"\n b is max";
}
/*1. inline keyword
2. write function definition block in one line  */