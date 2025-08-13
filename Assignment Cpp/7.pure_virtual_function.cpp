#include<iostream>
using namespace std;

class employee{
	public:
		int ph_no,salary;
		string name;
		
		void get(){
			cout<<"Enter name = "<<endl;
			cin>>name;
			cout<<"Enter ph_no = "<<endl;
			cin>>ph_no;
			cout<<"Enter salary = "<<endl;
			cin>>salary;
		}
		void show() {
			cout<<"name = "<<name;
		
		}
		
		virtual void display()=0;
};

// virtual function
void employee :: display() {
	cout<<"ph_no = "<<ph_no;
	cout<<"salary = "<<salary;
}

class info : public employee{
	public:
		int id;
		string address;
		
		void get1() {
			cout<<"id = "<<endl;
			cin>>id;
			cout<<"address = "<<endl;
			cin>>address;
		}
		
		void display() {
			cout<<"id = "<<id;
			cout<<"address = "<<address;
		}
};

int main() {
	employee *e;
	info i;
	e=&i;
	
	e->get();
	e->show();
	i.get1();
	i.display();
	
}