//destructor
#include<iostream>
using namespace std;
int num=0;
class demo{
    public:
        demo()                //default constructor
        {
            num++;
            cout<<"\n Object created :"<<num;
        }
        ~demo()                //destructor
        {
            cout<<"\n Object destroyed :"<<num;
            num--;
        }
};
int main()
{
    demo d1,d2,d3;
}