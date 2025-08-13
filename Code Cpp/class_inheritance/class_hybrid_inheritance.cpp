/* hybrid inheritance 
	base class student :
	 	rno, name
	 	get(), put() 
	sub 1 exam:
		s1, s2, s3
		getE(), putE()
	sub 2 sports:
		sports
		getsp() putsp()
	sub 3 result:
		total, per
		display()
*/
#include<iostream>
using namespace std;

class student {
	public:
	int rno;
	string name;
	
	void get() {
		cout<<"\n Enter student roll no = ";
		cin>>rno;
		cout<<"\n Enter student name = ";
		cin>> name;
	}
	void put() {
		cout<<"\n Student roll no = ";
		cout<<"\n student name = ";
	}
};

class exam : public student {
	public:
	int s1, s2, s3;
	
	void getE() {
		student :: get();
		cout<<"\n Enter subject 1 no = ";
		cin>>s1;
		cout<<"\n Enter subject 2 no = ";
		cin>>s2;
		cout<<"\n Enter subject 3 no = ";
		cin>>s3;
	}	
	
	void putE() {
		student :: put();
		cout<<"\n Enter subject 1 no = "<<s1;
		cout<<"\n Enter subject 2 no = "<<s2;
		cout<<"\n Enter subject 3 no = "<<s3;
	}
};

class sport : public student{
	public:
		int sp;
		
		void getsp() {
			
			cout<<"\n Enter sport score = ";
			cin>>sp;
		}
		
		void putsp() {
			cout<<"\n Sport score = "<<sp;
		}
};

class result : public sport, public exam {
	public:
		float total, per;
		
		void display() {
			total = s1+s2+s3+sp;
			per = total/4;
			
			exam :: putE();
			sport :: putsp();
			cout<<"\n Total marks  = "<< total;
			cout<<"\n Percentage = "<<per<<" %";
			
		}
};

int main() {
	result r1;
	r1.getE();
	r1.getsp();
	r1.display();
}