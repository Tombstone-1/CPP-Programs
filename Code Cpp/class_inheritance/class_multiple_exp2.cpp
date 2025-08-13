/* multiple inhertance 
	base class1 : evenodd
		num
		getn()
		
	base class2 : posneg
		num1
		getn1()
		
	derived : result 
		ans1(). ans2()
*/

#include<iostream>
using namespace std;
		
class even_odd {
	public:
		int num;
		
		void getn() {
			cout<<"\nEnter number = ";
			cin>>num;
			
	}
};

class pos_neg {
	public:
		int num1;
		
		void getn1() {
			cout<<"\n\nEnter number of pos neg = ";
			cin>>num1;
		
	}
};

class result : public even_odd, public pos_neg {
	public:

		void ans1(){
			even_odd :: getn();
			if (num%2==0) {
				cout<<"\nno. is even" ;
			}
			else{
				cout<<"\nno. is odd";
			}
		}
		
		void ans2(){
			pos_neg :: getn1();
			
			if(num1>=0) {
				if(num1== 0) {
					cout<<"\nno. is zero";
				}
				else{
					cout<<"\nno. is postive";
				}
			}
			else{
				cout<<"\nno. is negative";
			}
	}
};

int main() {
	result r1;
	r1.ans1();
	r1.ans2();
}