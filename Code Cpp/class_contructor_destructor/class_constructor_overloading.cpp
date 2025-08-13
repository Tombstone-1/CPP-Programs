/* Create a class student whose data members as name, address, mob, age.
Display  student's information using default and parameterized constructor */

#include<iostream>
using namespace std;

class student {
	public:
		string name;
		string address;
		long int mob_no;
		int age;
		
		student() {
			cout<<"\n\nEnter your name";
			cin>>name;
			cout<<"Enter your address";
			cin>>address;
			cout<<"Enter your mob_no";
			cin>>mob_no;
			cout<<"Enter your age";
			cin>>age;
		}
		student(string name, string address, long int mob_no, int age) {
			
			this ->name =name;
			this ->address = address;
			this ->mob_no = mob_no;
			this ->age = age;
		}
		
		void show() {
			cout<<"\nname"<< name;
			cout<<"\naddress"<< address;
			cout<<"\nmob_no"<<mob_no;
			cout<<"\nage"<<age;
		}
};

int main() {
	// for parameterized constructor
	student s1=student("somesh", "keshav nagar",7866435212,23);
	s1.show();
	
	// for default constructor
	student s2;
	s2.show();
}