/* uniary operator overloading minus
	in any overloading function , contructor or operator , paramater list should be different */

#include<iostream>
using namespace std;

class demo {
	public:
		int num;
		
		demo();
		
		void operator --();
		void operator --(int);
		void display();
};

demo::demo(){
	num=5;
}

void demo::operator --() {		// prefix function operator keyword is must for operator overloading
	--num;					
}

void demo::operator --(int ) {		// postfix function
	num--;
}

void demo::display(){
	cout<<"\n num value = "<<num;
}

int main(){
	demo d1;
	--d1;
	d1.display();
	d1--;
	d1.display();
}