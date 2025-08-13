//default constructor
#include<iostream>
using namespace std;
class maths{
    public:
        int num1,num2;
        maths()                    //default constructor
        {
            num1=100;
            num2=200;
        }
        void display()
        {
            cout<<"Ans= "<<num1+num2;
        }
};
int main()
{
    maths m;
    m.display();
}