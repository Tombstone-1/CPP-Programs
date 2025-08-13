/* hierarchical inheritance
	Account:
		accno, name
		read(), show()
	saving_account:
		rate_of_interest
		read(), show()
	current_account:
		odlimit
		read(), show() 
*/

#include<iostream>
using namespace std;

class account {
	public:
	int accno;
	string name;
	
	void read() {
		cout<<"\nEnter account number = ";
		cin>>accno;
		
		cout<<"\nEnter holder name = ";
		cin>>name;	
	}
	void show() {
		cout<<"\n Account No. = "<<accno;
		cout<<"\n Account holder name = "<<name;
	}
};

class saving_account : public account {
	public:
		int rate_in;
		
		void readS() {
			account :: read();
			cout<<"\nEnter rate of interest = ";
			cin>>rate_in;
				
		}
		void showS() {
			account :: show();
			cout<<"\n Account rate of interest = "<<rate_in;
		}
};

class current_account : public account {
	public: 
	int odlimit;
	
		void readC() {
			account :: read();
			cout<<"\nEnter account odlimit = ";
			cin>>odlimit;	
		}
		void showC() {
			account :: show();
			cout<<"\n Account odlimit = "<<odlimit;
		}
};

int main() {
	saving_account sa;
	current_account ca;
	
	sa.readS();
	sa.showS();
	
	ca.readC();
	ca.showC();
}