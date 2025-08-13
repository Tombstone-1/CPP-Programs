/*classes and objects: create a class car whose data members are: model, brand ,price.
and member functions : getdata() , putdata() [define member functions inside the class]*/
#include<iostream>
using namespace std;
class car{
    public:
    string model;
    string brand;
    int price;    
    void getdata(){
    cout<<"Enter model name: ";
    cin>>model;
    cout<<"Enter brand name: ";
    cin>>brand;
    cout<<"Enter price : ";
    cin>>price;    
    }
    void putdata(){
        cout<<"\n Model name : "<<model;
        cout<<"\n Brand name : "<<brand;
        cout<<"\n Price : "<<price;
    }
};
int main()
{
    car c1;
    c1.getdata();
    c1.putdata();
}