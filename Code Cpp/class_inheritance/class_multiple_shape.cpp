/* multiple inhertance 
	base class1 : triangle
		base, height
		gettri()
		
	base class2 : rectangle
		length, breath
		getrect()
		
	derived : shape 
		area
		areatri(), arearect()*/

#include<iostream>
using namespace std;
		
class triangle {
	public:
		int base, height;
		
		void gettri() {
			cout<<"\nEnter base = ";
			cin>>base;
			
			cout<<"\nEnter height = ";
			cin>>height;
	}
};

class rectangle {
	public:
		int length, width;
		
		void getrect() {
			cout<<"\nEnter length = ";
			cin>>length;
			
			cout<<"\nEnter width = ";
			cin>>width;
	}
};

class shape : public triangle, public rectangle {
	public:
		float area;
		
		void areatri(){
			triangle :: gettri();
			area = 0.5*(base*height);
			cout<<"area of triangle = "<<area;
		}
		
		void arearect(){
			rectangle :: getrect();
			area = length*width;
			cout<<"area of rectangle = "<<area;
	}
};

int main() {
	shape s1;
	s1.arearect();
	s1.areatri();
}