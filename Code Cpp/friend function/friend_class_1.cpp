/* friend class : access one class from another */

#include<iostream>
using namespace std;

class demo{
	int r;
	public:
		void get() {
			cout<<"\n Enter radius: ";
			cin>>r;
		}
		friend class test;				// friend class declaration .
};

class test {							// friend class defination
	public:
		void area(demo d1) {			// pass first class object or in which class you have declare this friend function.
		
			cout<<"\n Area of circle"<<3.14*d1.r*d1.r;
		}
};

int main() {
	demo d1;
	test t1;
	d1.get();			// normal class fucntion calling.
	t1.area(d1);		// friend class function calling with first class object inside it's arguements.
}

