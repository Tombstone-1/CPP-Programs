//parameterized constructor
#include<iostream>
using namespace std;
class test{
    public:
        int r;
        double ans;
        test(int radius)            //parameterized constructor
        {
            r=radius;
        }
        void show()
        {
            ans=3.14*r*r;
            cout<<"\n Area of circle ="<<ans;
        }
};
int main()
{
    test t1=test(9);        //constructor calling
    t1.show();
}