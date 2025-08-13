/* Create a class person whose data members : name, address and ph_no. 
member functions: get() , display(). accept data from user and display it.(outside the class) */
#include<iostream>
using namespace std;
class person{
    public:
        string name;
        string address;
    string ph_no;
    void get();
    void display();
};
void person::get()
{
    cout<<"Enter the name of person: ";
    cin>>name;
    cout<<"Enter the address of person: ";
    cin>>address;
    cout<<"Enter the phone number: ";
    cin>>ph_no;
}
void person::display()
{
    cout<<"\nPerson name:"<<name;
    cout<<"\nPerson address:"<<address;
    cout<<"\nPerson Phone number"<<ph_no;
}
int main()
{
    person p1;
    p1.get();
    p1.display();
}