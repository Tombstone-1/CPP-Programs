/*Write a C++ program to create a class Worker with data members as 
Worker_Name, No_of_Hours_worked, Pay_Rate. 
Write necessary member functions to calculate and display the salary of worker. 
(Use default value for Pay_Rate)    */    
#include<iostream>
using namespace std;
class worker{
    public:
        string worker_name;
        int no_of_hrs;
        int sal;
        void salary(string n,int h,int rate=1000)
        {
            worker_name=n;
            no_of_hrs=h;
            sal=no_of_hrs*rate;
        }
        void display()
        {
            cout<<"\n Name ="<<worker_name;
            cout<<"\n No of hours ="<<no_of_hrs;
            cout<<"\n Salary = "<<sal;
        }
};
int main()
{
    worker one;
    one.salary("ABC",12);
    one.display();
}