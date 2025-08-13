//this pointer
#include<iostream>
using namespace std;
class maths
{
    public:
    int num1,num2;
    maths(int num1,int num2)
    { // for pointing out data member because complier get confused
        this ->num1=num1;
        this ->num2=num2;
    }    
    void show()
    {
        cout<<"\n Ans= "<<num1*num2;
    }
};
int main()
{
    maths m=maths(45,12);
    m.show();
}