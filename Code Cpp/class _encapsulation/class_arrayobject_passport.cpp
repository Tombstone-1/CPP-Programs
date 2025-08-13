/* Create class person which contains data member as
Passport_id, Person_name, Nationality, Gender, Dob, Doi, Doe
accept 3 objects as input */

#include<iostream>
using namespace std;

class person {
	public:
		int passport_id;
		string person_name;
		string nationality;
		string gender;
		int dob;
		int doi;
		int doe;
		
		void getData();
		void displayData();
};
void person :: getData() {
	cout<<"\nEnter passport id = ";
	cin>>passport_id;
	cout<<"\nEnter person name = ";
	cin>>person_name;
	cout<<"\nEnter Nationality = ";
	cin>>nationality;
	cout<<"\nEnter Gender = ";
	cin>>gender;
	cout<<"\nEnter Date of birth = ";
	cin>>dob;
	cout<<"\nEnter Date of Issue = ";
	cin>>doi;
	cout<<"\nEnter Date of Expiry = ";
	cin>>doe;
	cout<<"\n***************************";
}

void person :: displayData() {
	cout<<"\nPassport ID = "<<passport_id;
	cout<<"\nPerson Name = "<<person_name;
	cout<<"\nNationality = "<<nationality;
	cout<<"\nGender = "<<gender;
	cout<<"\nDOB = "<<dob;
	cout<<"\nDOI = "<<doi;
	cout<<"\nDOE = "<<doe;
	cout<<"\n";
	
}

int main() {
	person p[3];
	int i;
	
	for(i=0;i<3;i++){
		p[i].getData();
	}
	for(i=0;i<3;i++){
		p[i].displayData();
	}
}