/* C++ program to sort interger and float array element in ascending order by using function overloading */

#include<iostream>
using namespace std;

int i, j;
	
int main() {
	
	int a[5] = {7,5,3,6,1};
	double b[5] = {6.5, 4.8, 5.9, 2.3, 9.5};
		
	int sort(int []);
	double sort(double []);
		
	sort(a);
	sort(b);
}

int sort(int a[]) {
	int temp = 0;
	
	cout<<"\n Sorted Interger array : ";
	for(i=0;i<5;i++)
	{
        for(j=i+1;j<5;j++)
	    {
            if(a[i]>a[j])
	        {
	          temp=a[i];
	          a[i]=a[j];
	          a[j]=temp;
	        }
	    }
	    cout<<"\t"<<a[i];
	}
	return 0;
}

double sort(double b[]) {
	
	double temp=0.0;
	
	cout<<"\n Sorted double array : ";	
	for(i=0;i<5;i++)
	{
        for(j=i+1;j<5;j++)
	    {
            if(b[i]>b[j])
	        {
	          temp=b[i];
	          b[i]=b[j];
	          b[j]=temp;
	        }
	    }
		cout<<"\t"<<b[i];
	}
	return 0.0;	
}