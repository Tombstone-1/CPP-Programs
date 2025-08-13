/* dyanmic objects include 2 new operator as new and delete */

#include<iostream>
using namespace std;

class student{
	public:
		int age;
		
	student() {				//with default constructor
		age = 20;
	}
	
	void getAge() {
		cout<<"\nage = "<<age;
	}
};

int main() {
	student *ptr = new student();
	ptr -> getAge();
	delete ptr;
}