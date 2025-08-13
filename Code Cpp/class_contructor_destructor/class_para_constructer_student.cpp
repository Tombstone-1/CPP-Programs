/*C++ program to create a class student whose data members: roll,name,per. Initialize data members
with default and parameterized constructor and display it. */
#include<iostream>
using namespace std;
class student{
     public:
         int roll;
         string name;
         float per;
         
     student()
     {
         cout<<"\n\nEnter roll number: ";
         cin>>roll;
         cout<<"Enter name: ";
         cin>>name;
         cout<<"Enter percentage: ";
         cin>>per;
     }
      
    student(int r,string n,float p)
    {
        roll=r;
        name=n;
        per=p;
    }
     void show()
     {
         cout<<"\nRoll number: "<<roll;
         cout<<"\nName: "<<name;
         cout<<"\nPercentage: "<<per;
     }
};
int main()
{
    student s1=student(12,"Shivam",89.87);
    s1.show();
    student s2;
    s2.show();
}