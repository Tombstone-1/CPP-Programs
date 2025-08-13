// To find maximum no. using function overloading

#include<iostream>
using namespace std;

int main() {
	int a, b;
	double a1, b1;
	
	int max(int a, int b);
	double max(double a1, double b1);
	
	cout<<"\n Maximum no. on intergers : "<<max(10,23);
	cout<<"\n Maximum no. on double : "<<max(10.12, 45.23);
	
}

int max(int a, int b) {
	if (a>b){
		return a;
	}
	else{
		return b;
	}
}

double max(double a1, double b1) {
	if (a1>b1){
		return a1;
	}
	else{
		return b1;
	}
}