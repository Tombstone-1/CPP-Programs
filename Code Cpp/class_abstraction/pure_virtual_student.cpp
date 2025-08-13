#include<iostream>
using namespace std;

class student{
	public:
		int roll;
		string name;
		virtual void get()=0;
};

// it's useless
void student :: get() {
	cout<<"Enter roll_no = "<<endl;
	cin>>roll;
	cout<<"Enter name = "<<endl;
	cin>>name;
}

class result : public student{
	public:
		float per;
		void get() {
			cout<<"enter percentage = "<<endl;
			cin>>per;
		}
		void show() {
			cout<<"name = "<<name<<endl;
			cout<<"roll_no = "<<roll<<endl;
			cout<<"per = "<<per<<" %"<<endl;
		}
};

int main() {
	student *s1;
	result r1;
	s1 = &r1;
	
	//s1->get();
	s1->get();
	r1.show();
}