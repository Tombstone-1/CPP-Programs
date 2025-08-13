/*array of object: create a class book whose data members as b_id,b_name,author and 
price . Accept data from user for 5 objects and display it.  */
#include<iostream>
using namespace std;
class book{
    public:
        int b_id;
        string b_name;
        string author;
        int price;
        void accept();
        void display();
};
void book :: accept()
{
    cout<<"\nEnter book id :";
    cin>>b_id;
    cout<<"Enter book name : ";
    cin>>b_name;
    cout<<"Enter author name : ";
    cin>>author;
    cout<<"Enter price : ";
    cin>>price;
}
void book :: display()
{
    cout<<"\n Book id :"<<b_id;
    cout<<"\n Book name :"<<b_name;
    cout<<"\n Author name :"<<author;
    cout<<"\n Price :"<<price;
}
int main()
{
    book b[5];
    int i;
    for(i=0;i<5;i++)
    {
        b[i].accept();    
    }
    for(i=0;i<5;i++)
    {
        b[i].display();
    }
}