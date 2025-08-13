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