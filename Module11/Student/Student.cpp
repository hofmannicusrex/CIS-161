#include <iostream>
#include <string>
using namespace std;

class Student {
private:
	    int id;
	    string name;
	   double gpa;
public:
	    Student()  // Default Constructor
		{
		        id = -1;
		        name = "";
		        gpa = 0.0;
		}

		Student(string studentName)
		{  // Assign the parameter's value to the name member variable.
			name = studentName;

			// Initialize the member variables id and gpa.
			id = 922;
			gpa = 4.0;
		}

		Student(int studentID)
		{  // Assign the parameter's value to the id member variable.
			id = studentID;

			// Initialize the member variables name and gpa.
			name = "Noel";
			gpa = 3.7;
		}

		Student(double studentGPA)
		{  // Assign the parameter's value to the gpa member variable.
			gpa = studentGPA;

			// Initialize the member variables name and id.
			name = "Ashley";
			id = 35;
		}

		Student(int studentID, string studentName)
		{  // Assign the parameter's value to the id and name member variables.
			id = studentID;
			name = studentName;

			// Initialize the member variable gpa.
			gpa = 3.7;
		}

		Student(int studentID, double studentGPA)
		{  // Assign the parameter's value to the id and gpa member variables.
			id = studentID;
			gpa = studentGPA;

			// Initialize the member variable name.
			name = "SAMPLE NAME NOT FOUND";
		}

		Student(string studentName, double studentGPA)
		{  // Assign the parameter's value to the gpa and name member variables.
			gpa = studentGPA;
			name = studentName;

			// Initialize the member variable id.
			id = 90001;
		}

		Student(int studentID, string studentName, double studentGPA)
		{  // Assign the parameter's value to the gpa, name, and id member variables.
			id = studentID;
			gpa = studentGPA;
			name = studentName;
		}

	    void setId(int);
	    void setName(string);
	    void setGpa(double);
	    int getId() const;
	    string getName() const;
	   double getGpa() const;
	    void display();
	
};
void Student::setId(int id) {
	     this->id = id;
	
}
void Student::setName(string name) {
	     this->name = name;
	
}
void Student::setGpa(double gpa) {
	     this->gpa = gpa;
	
}
int Student::getId() const {
	     return id;
	
}
string Student::getName() const {
	    return name;
	
}
double Student::getGpa() const {
	    return gpa;
	
}
void Student::display() {
	cout << "\n========\n";
	     cout << id << endl;
	     cout << name << endl;
	     cout << gpa << endl;
		 cout << "========\n";
}
int main() {
	     Student student1;
	     student1.setId(10);
	     student1.setName("Ayah");
	     student1.setGpa(3.2);
	     student1.display();

		 Student student2("Toby");
		 student2.display();

		 Student student3(900727530);
		 student3.display();

		 Student student4(3.9);
		 student4.display();

		 Student student5(90075312, "Jacob Sparrow");
		 student5.display();

		 Student student6(95312, 2.5);
		 student6.display();

		 Student student7("Greymane", 2.9);
		 student7.display();

		 Student student8(1337, "Xul", 4.2);
		 student8.display();

		 return 0;
}