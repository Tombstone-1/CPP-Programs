/*Write a C++ program to create a class Date which contains three data members as 
dd, mm, yyyy. Create and initialize the object by using parameterized constructor 
and display date .*/
#include<iostream>
using namespace std;
class date
{
    public:
        int day;
        string month;
        int year;
        date(int d,string m,int y)         //parameterized constructer
        {
            day=d;
            month=m;
            year=y;
        }
        void show()
        {
            cout<<"\n Enter date :";
            cin>>day;
            cout<<"\n Enter month : ";
            cin>>month;
            cout<<"\nEnter year :";
            cin>>year;
        }
        
    };
    int main()
    {
        date d1=date(12," feb",2020);        //constructor calling
        d1.show();
    }