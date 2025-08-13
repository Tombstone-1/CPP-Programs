/* Create a class book whose members b_name, author, pages.
 allocate the memory dynamically and display the values (using dynamic objects */
 
 #include<iostream>
 using namespace std;
 
 class book {
 	public: 
 	string book_name;
 	string author;
 	int pages;
 	
 	book(string book_name, string author, int pages) {				//parameterized constructor
 		this -> book_name = book_name;
 		this -> author = author;
 		this -> pages = pages;
	 }
	 
	 void display() {
	 	cout<<"\nBook name = "<<book_name;
	 	cout<<"\nAuthor = "<<author;
	 	cout<<"\npages = "<<pages;
	 }
	
 };
 
 int main() {
 	book *ptr = new book("Death Stranding", "Hideo Kojima", 143);
 	ptr -> display();
 	delete ptr;
 }