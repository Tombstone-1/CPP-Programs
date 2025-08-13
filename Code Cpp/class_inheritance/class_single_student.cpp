/* program of single inheritance to store information of student
base class : student 
	data members : roll no and name and s1, s2, s3 marks
	member function : getdata() putdata()
derived class : result
	data members : total, per
	member function : calRes(), showRes()
 */
 
 #include<iostream>
 using namespace std;
 
 class student {
 	protected:
 		int roll_no;
		float s1, s2, s3;
 		string name;
 		
 		void getdata(){
 			cout<<"\n Enter student roll no = ";
 			cin>>roll_no;
 			
 			cout<<"\n Enter student name = ";
 			cin>>name;
 			
 			cout<<"\n Enter student s1, s2, s3 marks = ";
 			cin>>s1>>s2>>s3;
		 }
		 
		 void putdata() {
		 	cout<<"\n student roll no = "<<roll_no;
		 	cout<<"\n student Name = "<<name;
		 	cout<<"\n student s1 marks  = "<<s1;
		 	cout<<"\n student s2 marks  = "<<s2;
		 	cout<<"\n student s3 marks  = "<<s3;
		 	
		 }
 };
 
 class result : protected student {
 	public:
 		float total = 0.0, per = 0.0;
 		void calRes() {
 			student :: getdata();
 			
 			total = s1+s2+s3;
 			per = total/3;
 		}
 		
 		void showRes() {
 			student :: putdata();
 			
 			cout<<"\n Total marks = "<<total;
 			cout<<"\n Percentage = "<<per<<' %';
		 }
 };
 
 int main() {
 	result r1;
 	r1.calRes();
 	r1.showRes();
 }