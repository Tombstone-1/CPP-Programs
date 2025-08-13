/* hierarchical inheritance
	employee:
		eno, ename
		read(), show()
	personal:
		phno,address
		readP(), showP()
	official:
		department
		readO(), showO() 
*/

#include<iostream>
using namespace std;

class employee {
	public:
	int eno;
	string ename;
	
	void read() {
		cout<<"\n\nEnter employee number = ";
		cin>>eno;
		
		cout<<"\nEnter employee name = ";
		cin>>ename;	
	}
	void show() {
		cout<<"\n employee number = "<<eno;
		cout<<"\n employee name = "<<ename;
	}
};

class personal : public employee {
	public:
		int phno;
		string address;
		
		void readP() {
			employee :: read();
			cout<<"\nEnter phone number = ";
			cin>>phno;
			cout<<"\nEnter address = ";
			cin>>address;
				
				
		}
		void showP() {
			employee :: show();
			cout<<"\n phone Number = "<<phno;
			cout<<"\n address = "<<address;
		}
};

class official : public employee {
	public: 
	string department;
	
		void readO() {
			employee :: read();
			cout<<"\nEnter department name = ";
			cin>>department;	
		}
		void showO() {
			employee :: show();
			cout<<"\n department = "<<department;
		}
};

int main() {
	personal P;
	official O;
	
	P.readP();
	P.showP();
	
	O.readO();
	O.showO();
}