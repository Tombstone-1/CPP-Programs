/* friend function */

#include<iostream>
using namespace std;

class demo{
    int a,b;
    public:
        void getdata();
        friend int sum(demo);            //friend function declaration
};
void demo ::getdata()
{
    cout<<"Enter two numbers: ";
    cin>>a>>b;
}
int sum(demo d1)                    //friend function definition 
{    
    return (d1.a + d1.b);
}
int main()
{
    demo d1;
    d1.getdata();
    cout<<"Addition = "<<sum(d1);        //friend function calling
}