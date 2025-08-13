/* Create a class Person that contains data members as p_name, city, Mob_No. 
Accept data and display it. using parameterized constructor. */
#include<iostream>
using namespace std;
class person{
    public:
        string p_name;
        string city;
        string mob_no;
        person(string p_name,string city,string mob_no)
        {
            this ->p_name=p_name;
            this ->city=city;
            this ->mob_no=mob_no;
        }
        void show()
        {
            cout<<"\Person name: "<<p_name;
            cout<<"\nCity name: "<<city;
            cout<<"\nMobile number: "<<mob_no;
        }
    
};
int main()
{
    person p = person("Sohan","Noida","9876544321");
    p.show();
}