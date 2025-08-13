/* Multi level inheritance
  */
  
#include<iostream>
using namespace std;

class first_name{
	public:
		string f_name;
		void get1() {
			cout<<"\nEnter your first name = ";
			cin>>f_name;
		}
};

class middle_name : public first_name{
	public:
		string m_name;
		void get2() {
			first_name :: get1();
			cout<<"\nEnter your middle name = ";
			cin>>m_name;
		}
	
};

class last_name : public middle_name{
	public:
		string l_name;
		void get3() {
			middle_name :: get2();
			cout<<"\nEnter your last name = ";
			cin>>l_name;
		}
		
		void display () {
			get3();
			cout<<"\nYour Full Name  = "<<f_name<<' '<<m_name<<' '<<l_name;
		}
};

int main() {
	 last_name as;
	 as.display();
}