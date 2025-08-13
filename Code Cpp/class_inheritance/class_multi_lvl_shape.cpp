/* C++ program of multilevel inheritance 
base class shape  :  data members: radius
                    member functions: get()
                    
derived1 class circle: data members : ans
                    member functions: formula()
                    
derived2 class area : member functions: display()
 */
 
 /* Multi level inheritance
  */
  
#include<iostream>
using namespace std;

class shape{
	public:
		int radius;
		void get() {
			cout<<"\nEnter radius = ";
			cin>>radius;
		}
};

class circle : public shape{
	public:
		float ans;
		void formula() {
			shape :: get();
			ans = 3.14*radius*radius;
		}
	
};

class area : public circle{
	public:
		void display () {
			circle :: formula();
			cout<<"\nArea of Circle  = "<<ans;
		}
};

int main() {
	 area a1;
	 a1.display();
}