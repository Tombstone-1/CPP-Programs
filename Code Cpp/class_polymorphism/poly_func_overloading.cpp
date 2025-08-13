/* c++ to calculate circle = A=pr2, sphere = A=4pr2 and area of cone = pr(l + r) and by using function overloading */

#include<iostream>
using namespace std;

int main() {
	
	int ci_r;
	double sp_r;
	double co_l, co_r;
	
	int area(int ci_r);
	double area(double sp_r);
	double area(double co_l, double co_r);
	
	cout<<"\n Area of Circle = "<<area(6);
	cout<<"\n Area of Sphere = "<<area(8.7);
	cout<<"\n Area of Cone = "<<area(6.5,8.7);
	
}

int area(int ci_r) {
	
	return 3.14*ci_r*ci_r;
}

double area(double sp_r) {
	return 4*3.14*(sp_r*sp_r);
}

double area(double co_l, double co_r) {
	return 3.14*co_r*(co_l+co_r);
}