/* create a class shape to calculate area of circle, rectangle and triangle with appropiate data member and member functions */

#include<iostream>
using namespace std;

class shape{
	public :
	int r,l,w;
	double b,h;
	
	int area(int r){
		cout<<"\nArea of circle : "<<3.14*r*r;
		return 0;
	}
	int area(int l, int w){
		cout<<"\nArea of rectangle : "<<l*w;
		return 0;
	}
	double area(double b, double h){
		cout<<"\nArea of triangle : "<<0.5*(b*h);
		return 0.0;
	}
	
	
};

int main() {
	
	shape s1;
	s1.area(6);
	s1.area(4,4);
	s1.area(4.3, 7.4);
}