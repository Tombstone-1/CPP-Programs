/* Create a base class Student(Roll_No, Name)  
which derives two classes Academic_Marks(Mark1, Mark2, Mark3)  and 
Extra_Activities_Marks(Marks). Class Result(Total_Marks, Grade) 
inherits both Academic_Marks and Extra_Activities_Marks classes.  
(Use Virtual Base Class) 

*/
#include <iostream>
using namespace std;

class Student {
protected:
    int rollNo;
    string name;
public:
    void getDetails() {
        cout << "Enter Roll No: ";
        cin >> rollNo;
        cout << "Enter Name: ";
        cin >> name;
    }
    void displayDetails() {
        cout << "Roll No: " << rollNo << endl;
        cout << "Name: " << name << endl;
    }
};

class AcademicMarks: virtual public Student {
protected:
    int mark1, mark2, mark3;
public:
    void getAcademicMarks() {
        cout << "Enter Mark 1: ";
        cin >> mark1;
        cout << "Enter Mark 2: ";
        cin >> mark2;
        cout << "Enter Mark 3: ";
        cin >> mark3;
    }
    void displayAcademicMarks() {
        cout << "Mark 1: " << mark1 << endl;
        cout << "Mark 2: " << mark2 << endl;
        cout << "Mark 3: " << mark3 << endl;
    }
};

class ExtraActivitiesMarks: virtual public Student {
protected:
    int marks;
public:
    void getExtraActivitiesMarks() {
        cout << "Enter Extra Activities Marks: ";
        cin >> marks;
    }
    void displayExtraActivitiesMarks() {
        cout << "Extra Activities Marks: " << marks << endl;
    }
};

class Result: public AcademicMarks, public ExtraActivitiesMarks {
private:
    int totalMarks;
    char grade;
public:
    void calculateResult() {
        totalMarks = mark1 + mark2 + mark3 + marks;
        if(totalMarks >= 80) {
            grade = 'A';
        }
        else if(totalMarks >= 60) {
            grade = 'B';
        }
        else if(totalMarks >= 40) {
            grade = 'C';
        }
        else {
            grade = 'F';
        }
    }
    void displayResult() {
        cout << "Total Marks: " << totalMarks << endl;
        cout << "Grade: " << grade << endl;
    }
};

int main() {
    Result r;
    r.getDetails();
    r.getAcademicMarks();
    r.getExtraActivitiesMarks();
    r.calculateResult();
    
    r.displayDetails();
    r.displayAcademicMarks();
    r.displayExtraActivitiesMarks();
    r.displayResult();
    return 0;
}
