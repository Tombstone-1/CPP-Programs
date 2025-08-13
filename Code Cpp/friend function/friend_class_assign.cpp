/* employee:
		eid, ename, esal
		getData()
	info:
	show()
	
 */
 
 #include<iostream>
 using namespace std;
 
 class employee{
 	int eid,esal;
 	string ename;
 	
 	public:
 		void getData() {
 			cout<<"\n enter employee id = ";
 			cin>>eid;
 			cout<<"\n enter employee name = ";
 			cin>>ename;
 			cout<<"\n enter salary = ";
 			cin>>esal;
		 }	
		 friend class info;
 };
 
 class info{
 	public:
 		void show(employee e1) {
 			cout<<"\n employee id = "<<e1.eid;
 			cout<<"\n name = "<<e1.ename;
 			cout<<"\n salary = "<<e1.esal;
 			
		 }
	
 };
 
 int main() {
 	employee e1;
 	info i1;
 	e1.getData();
 	i1.show(e1);
 }