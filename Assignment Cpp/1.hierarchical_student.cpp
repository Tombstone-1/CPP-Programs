#include<iostream>
using namespace std;

class student{
	public:
		int roll_no;
		string name;
		
		void gets() {
			cout<<"Enter name = ";
			cin>>name;
			cout<<"Enter roll_no = ";
			cin>>roll_no;
		}
		
		void shows() {
			cout<<"name = "<<name;
			cout<<"roll_no = "<<roll_no;
		}
};

class personal : public student{
	public:
		int ph_no;
		string address;
		
		void getP() {
			student :: gets();
			cout<<"Enter phone number = ";
			cin>>ph_no;
			cout<<"Enter address = ";
			cin>>address;
		}
		void showP() {
			student :: shows();
			cout<<"phone no. = "<<ph_no;
			cout<<"address = "<<address;
		}
};

class academic : public student{
	public:
		int marks;
		string branch;
		
		void getA() {
			student :: gets();
			cout<<"Enter marks : ";
			cin>>marks;
			cout<<"Enter branch : ";
			cin>>branch;
		}
		void showA() {
			student :: shows();
			cout<<"marks : "<<marks;
			cout<<"branch : "<<branch;
		}
};

int main() {
	personal p1;
	p1.getP();
	p1.showP();
	
	academic a1;
	a1.getA();
	a1.showA();
}