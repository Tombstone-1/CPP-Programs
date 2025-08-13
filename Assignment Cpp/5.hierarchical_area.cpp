#include<iostream>
using namespace std;

class maths{
	public:
		int r,b,h;
		
		void getCircle() {
			cout<<"Enter radius = ";
			cin>>r;
		}
		
		void getTriangle() {
			cout<<"Enter base = ";
			cin>>b;
			cout<<"Enter hieght = ";
			cin>>h;
		}
};

class circle : public maths{
	public:
	
		void areaCircle() {
			maths :: getCircle();
			cout<<"area of circle = "<<3.14*r*r;
		}
};

class triangle : public maths{
	public:
		
		void areaTriangle() {
			maths :: getTriangle();
			cout<<"area of triangle = "<<0.5*b*h;
		}
		
};

int main() {
	circle c1;
	c1.areaCircle();
	
	triangle t1;
	t1.areaTriangle();
}