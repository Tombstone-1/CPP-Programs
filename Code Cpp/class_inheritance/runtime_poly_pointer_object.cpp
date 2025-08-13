/* pointer to object 
pointer to object overriding 
*/

#include<iostream>
using namespace std;

class A {
	public:
		void display() {
			cout<<"\n This is base class ";
		}
};

class B : public A{
	public:
		void display() {
			cout<<"\n This is derived class";
			
		}
};

int main() {
	A*ptr;		// object pointer of base class.
	B b1;		// object
	ptr= &b1;	// store the address
	ptr -> display(); 		// function calling using pointer object.
	
	b1.display();     // access derived class function from normal object .

}