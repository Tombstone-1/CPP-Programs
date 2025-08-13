//parameterized constructor with user input
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
        void get()
        {
            cout<<"\n Enter the radius :";
            cin>>r;
        }
        void show()
        {
            ans=3.14*r*r;
            cout<<"\n Area of circle ="<<ans;
        }
};
int main()
{
    test t1=test(8);
    t1.show();
    t1.get();        
    t1.show();
}