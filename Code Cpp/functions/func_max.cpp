// cpp porgram for find maximum in 2 no. using function.

#include<iostream>
using namespace std;

int max(int n1, int n2);

int main() {
	int n1, n2;
	cout<<"Enter two No. ";
	cin>>n1>>n2;
	
	cout<<max(n1,n2);
	
}
int max(int n1, int n2) {
	if (n1>n2) {
		return n1;
	}
	else{
		return n2;
	}
}