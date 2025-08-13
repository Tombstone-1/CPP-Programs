/* Create a class college whose data members as c_id, c_name, e_year,university.
accept data for 'n' objects and display it. */

#include<iostream>
using namespace std;
class college{
    public:
        int c_id;
        string  c_name;
        int  e_year;
        string university;
        
         void get();
         void show();
};
void college :: get()
{
    cout<<"\nEnter college id: ";
    cin>>c_id;
    cout<<"Enter college name: ";
    cin>>c_name;
    cout<<"Enter established year: ";
    cin>>e_year;
    cout<<"Enter university name: ";
    cin>>university;
}
void college :: show()
{
    cout<<"\nCollege Id: "<<c_id;
    cout<<"\nCollege name: "<<c_name;
    cout<<"\nEstablished year: "<<e_year;
    cout<<"\nUniversity name: "<<university;
}
int main()
{	
	int i,n;
	cout<<"Enter n no. of object for class";
	cin>>n;
	
    college c[n];
    
    for(i=0;i<n;i++)
    {
        c[i].get();
    }
    for(i=0;i<n;i++)
    {
        c[i].show();
    }
}