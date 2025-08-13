/*Function overriding : same function name same parameters
virtual function : 
	virtual keyword
	syntax : virtual return_type fun_name(parameters);
*/

#include<iostream>
using namespace std;

class base{
	public:
		virtual void display();     	// virtual function declared only.
		
};

class sub : public base {
	public:
		void display() {				//redefined that virtual function here in sub class.
			cout<<"\n this is derived class ";
		}
};

int main () {
	
	base *b1;				// made an pointer object for base class.
	sub s1; 				// and normal object for sub class
	b1 = &s1;				// store the address of sub to base class pointer obj.
	b1 -> display();		// called sub class function or virtual function from base class object.
	s1.display();			// this is normal calling of just sub class and its function.
}