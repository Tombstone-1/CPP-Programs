/* Create a class book whose members b_name, author, pages.
 allocate the memory dynamically and display the values (using dynamic objects */
 
 #include<iostream>
 using namespace std;
 
 class book {
 	public: 
 	string book_name;
 	string author;
 	int pages;
 	
 	book() { 				//default constructor.
 		cout<<"\nEnter book name = ";
 		cin>>book_name;
 		
 		cout<<"\n Enter author = ";
 		cin>>author;
 		
 		cout<<"\npages = ";
 		cin>>pages;
	 }
	 
	 void display() {
	 	cout<<"\nBook name = "<<book_name;
	 	cout<<"\nAuthor = "<<author;
	 	cout<<"\npages = "<<pages;
	 }
	
 };
 
 int main() {
 	book *ptr = new book();
 	ptr -> display();
 	delete ptr;
 }