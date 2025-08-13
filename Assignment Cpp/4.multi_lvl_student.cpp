#include<iostream>
using namespace std;

class student {
	public:
		int roll_no;
		void getS() {
			cout<<"\nEnter student roll_no = ";
			cin>>roll_no;
		}
};

class personal_info : public student {
	public:
		string name;
		string address;
		
		void getP() {
			student :: getS();
			cout<<"\nEnter student name = ";
			cin>>name;
			
			cout<<"\nEnter student address = ";
			cin>>address;
		}
};

class academic_info : public personal_info {
	public:
		string branch;
		float per;
		
		void getA() {
			personal_info :: getP();
			cout<<"\nEnter branch name = ";
			cin>>branch;
			
			cout<<"\nEnter percentage = ";
			cin>>per;
				
		}
		void show() {
			getA();
			cout<<"\nstudent roll_no = "<<roll_no;
			cout<<"\nstudent name = "<<name;
			cout<<"\nstudent address = "<<address;
			cout<<"\nstudent branch = "<<branch;
			cout<<"\nstudent percentage = "<<per;
		}
		
};

int main() {
	academic_info cl1;
	cl1.show();
}