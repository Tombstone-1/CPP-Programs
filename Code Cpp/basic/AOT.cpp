//C++ program to calculate area of triangle using float data type:
#include<iostream>
using namespace std;
int main()
{
    int b,h;
    float ar;
    cout<<"Enter base and height: ";
    cin>>b>>h;
    ar=0.5*b*h;
    cout<<"Area of triangle: "<<ar;
}