/*Hierarchical
Class base: Maths
         data members :num,base,expo
        member function: getF(), getP()
        
Sub class1: Factorial
        data members :  fact
        member function: getfact()
        
Sub class2: Power
        data member: power
        member function: getpower()                    
*/

#include<iostream>
using namespace std;

class maths{
	public:
		int num, base, expo;
		 void getF() {
		 	cout<<"\nEnter a num for fact = ";
		 	cin>>num;
		 }
		 
		 void getP() {
		 	cout<<"\nEnter base = ";
		 	cin>>base;
		 	
		 	cout<<"\nEnter exponent = ";
		 	cin>>expo;
		 }
};

class factorial : public maths{
	public:
		int i,fact = 1;
		void getfact() {
			maths :: getF();
			for(i=num; i>0; i--){
				fact = fact*i;
			}
			cout<<"\nFactorial = "<<fact;
		}
		
};

class power : public maths{
	public:
		int i, pow = 1;
		void getPow() {
			maths :: getP();
			
			while(expo>0){
				pow = pow * base;
				expo--;
			}
			cout<<"\nPower = "<<pow;
		}
};

int main() {
	factorial f1;
	power p1;
	
	f1.getfact();
	cout<<"\n";
	p1.getPow();
}
