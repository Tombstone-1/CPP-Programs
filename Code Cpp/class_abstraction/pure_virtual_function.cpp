#include<iostream>
using namespace std;

class base{		//abstract base class as virtual declared here.
	public:
		virtual void show()=0;	// pure virtual function
};

//defination is of no use to virtual function
void base :: show() {
	cout<<"this is virtual definition inside abstract class"<<endl;
}

class derived : public base{
	public:
		void show(){
			cout<<"this is derived class"<<endl;
		}
};

int main() {
	base *b1; 		//pointer variable
	derived d1;
	b1=&d1;			//storing address
	
	b1->show();
	b1->show();
}