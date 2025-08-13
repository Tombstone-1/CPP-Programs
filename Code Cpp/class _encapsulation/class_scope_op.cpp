//define member functions outside the class 
#include<iostream>
using namespace std;
class test{
    public:
        int a,b;
        void sum();    
};
void test :: sum()
{
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    cout<<"\n Addition = "<<a+b;
}
int main()
{
    test t1;
    t1.sum();
}