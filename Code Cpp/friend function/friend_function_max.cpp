/* create a class max whose data members num1, num2 and 
to find maximum no. among two using friend functions */

#include<iostream>
using namespace std;

class Max_1 {
	private:
		int num1, num2 ;
		
	public:
		void getData();
		friend int sort(Max_1);
};

void Max_1 :: getData() {
		cout<<"\n enter two no = ";
			cin>>num1>>num2;
}

int sort (Max_1 m1) {
	if (m1.num1>m1.num2) {
		return m1.num1;
	}
	else{
		return m1.num2 ;
	}
}

int main() {
	Max_1 m1;
	m1.getData();
	cout<<"Maximum number = "<<sort(m1);
}
