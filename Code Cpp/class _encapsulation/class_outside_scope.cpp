//define member functions outside the class
#include<iostream>
using namespace std;
class test{
    public:
        int a,b;                //data members
        int sum(int ,int);        //member function declaration
};
int test :: sum(int a,int b)      //function definition
{
    cout<<"\n Addition = "<<a+b;
}
int main()
{
    test t1;
    t1.sum(20,52);
}