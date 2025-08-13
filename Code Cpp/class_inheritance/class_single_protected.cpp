/* program to derived single inheritance to calculate cube of number
base class: class value
sub class : class cube  */

#include<iostream>
using namespace std;

class value{			// base class or parent class
	protected:
		int x;
		
		void get() {
			cout<<"\nEnter a no. = ";
			cin>>x;
		}

};

class cube : protected value {		//derived class or child class or sub class // access specifier is needed in sub class too
	public:
	void show() {
		value :: get();        // can access base class function through this and wont have to write one more statement in main function.
		cout<<"\ncube of Number = "<<x*x*x;
	}
};

int main() {
	cube c1;
	// c1.get(); // no need cause calling from sub class 
	c1.show();
}