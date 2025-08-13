#include<iostream>
using namespace std;

class student{
	public:
		string name;
		string address;
		
		void getP() {
			cout<<"Enter name = ";
			cin>>name;
			cout<<"Enter address = ";
			cin>>address;
		}
		
		void showP() {
			cout<<"name = "<<name;
			cout<<"address = "<<address;
		}
};

class data : public student{
	public:
		int roll,marks;
		string branch;
		
		void getS() {
			student :: getP();
			cout<<"roll _no ";
			cin>>roll;
			cout<<"marks = ";
			cin>>marks;
			cout<<"branch = ";
			cin>>branch;
		}
		
		void showS() {
			student :: showP();
			cout<<"roll_no"<<roll;
			cout<<"marks = "<<marks;
			cout<<"branch = "<<branch;
		}
};

int main() {
	data d1;
	d1.getS();
	d1.showS();
}