#include<iostream>
using namespace std;

class personal{
	public:
		string name;
		string address;
		
		void getP() {
			cout<<"enter name = ";
			cin>>name;
			cout<<"enter address = ";
			cin>>address;
		}
};

class academic{
	public:
		int roll_no, marks;
		
		void getA() {
			cout<<"Enter marks = ";
			cin>>marks;
			cout<<"enter roll_no = ";
			cin>>roll_no;
		}	
};

class student : public personal, public academic{
	public:
		
		void display() {
			personal : getP();
			academic : getA();
			
			cout<<"name = "<<name;
			cout<<"address = "<<address;
			
			cout<<"marks = "<<marks;
			cout<<"roll no = "<<roll_no;
		}	
};

int main() {
	student s1;
	s1.display();
}