/* Create a class employee whose data members : eid,name,salary. and member
functions: accept(), show(). Accept data from user and display it. */

#include<iostream>
using namespace std;
class employee{
    public:
    int eid;
    string name;
    int salary;
    
    void accept(){
        cout<<"Enter employee Id:";
        cin>>eid;
        cout<<"Enter employee name:";
        cin>>name;
        cout<<"Enter employee Salary:";
        cin>>salary;
    }
    void show(){
        cout<<"\nEmployee Id"<<eid;
        cout<<"\nEmployee name"<<name;
        cout<<"\nEmployee Salary"<<salary;
    }
};
int main()
{
    employee e1;
    e1.accept();
    e1.show();
}