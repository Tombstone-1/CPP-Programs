//unary operator overloading.

#include<iostream>
using namespace std;

class demo{
	public:
		int num;
	demo() {						// default constructor
		num = 5;
	}
	
	void operator ++() {			//prefix operator keyword is must 
		++num;
	}
	
	void operator ++(int ){			//postfix
		num++;
	}
	void display() {
		cout<<"\n num value = "<<num;
	}
};

int main() {
	demo d1;			// constructor calls automatically
	d1++;				// postfix operator calling
	d1.display();
	++d1;
	d1.display();		// prefix operator calling
	
}