//inline function
#include<iostream>
using namespace std;
inline int iseven(int a)
{
    return (a%2==0)?1:0;            //write function definition block in one line
}
int main()
{
    int a,b;
    if(iseven(46))
    cout<<"even no";
    else
    cout<<"odd no";
}
/*1. inline keyword
2. write function definition block in one line  */