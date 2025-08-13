// polymorphism example 1

#include<iostream>
using namespace std;

int main() {
	int a, b;
	double num1 , num2;
	
	int sum(int a, int b);
	double sum(double num1, double num2);
	
	cout<<"\nAddition of intergers : "<<sum(10,23);
	cout<<"\nAddition of double : "<<sum(10.12, 45.23);
	
}

int sum(int a, int b) {
	return a+b;
}

double sum (double num1, double num2) {
	return num1+num2;
}