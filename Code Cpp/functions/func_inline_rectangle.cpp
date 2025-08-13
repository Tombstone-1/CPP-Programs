//program to accept length and width of a rectangle. 
//Calculate and display perimeter as well as area of a rectangle by using Inline function

#include<iostream>
using namespace std;

inline aor(int l, int w) {
	return (l*w);
}
inline peri(int l, int w) {
	return (2*(l+w));
}

int main() {
	int l,w;
	cout<<"Enter length and width";
	cin>>l>>w;
	
	cout<<"Area of rectangle"<<aor(l,w);
	cout<<"Perimeter of rectangle"<<peri(l,w);
}