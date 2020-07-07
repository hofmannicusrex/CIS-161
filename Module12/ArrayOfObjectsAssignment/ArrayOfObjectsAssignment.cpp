/*  ArrayOfObjectsAssignment.cpp || Nick Hofmann 7/6/2020
    nickhofmann1989@hotmail.com | nohofmann@dmacc.edu

    This program will demonstrate the use of arrays of objects. It modifies some source
    code that was provided by an instructor and makes it work by using an array of objects
    to create a set number of Student objects.

*/
#include <iostream>
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
        ~Student();  // Destructor
    void setId(int);
    void setName(string);
    void setGpa(double);
    int getId() const;
    string getName() const;
    double getGpa() const;
    void display();
};

Student::~Student()
{
    // DESTRUCTOR FOR THE STUDENT CLASS.
}

/*
 ========================
 ====    MUTATORS    ====
 ========================
*/
void Student::setId(int id) {
    this->id = id;
}
void Student::setName(string name) {
    this->name = name;
}
void Student::setGpa(double gpa) {
    this->gpa = gpa;
}

/*
 =========================
 ====    ACCESSORS    ====
 =========================
*/
int Student::getId() const {
    return id;
}
string Student::getName() const {
    return name;
}
double Student::getGpa() const {
    return gpa;
}

// Function to display the student's ID, name, and GPA.
void Student::display() {
    cout << "======\n";
    cout << "Student ID: " << id << endl;
    cout << "Student Name: " << name << endl;
    cout << "Student GPA: " << gpa << endl;
}

int main()
{
    // VARIABLE DECLARATIONS
    const int ARRAY_SIZE = 5;  // Controls the size of the array of objects.
    Student studentArray[ARRAY_SIZE];

    for (int counter = 0; counter < ARRAY_SIZE; counter++)
    {
        // LOCAL VARIABLE DECLARATIONS
        const int STUDENT_ID_CALCULATOR = 10;  // Local variable to assign the student ID number.
        string userNameInput;
        double userGPAInput;
        // Calculation for the student ID number.
        studentArray[counter].setId(counter + STUDENT_ID_CALCULATOR);

        cout << "Please enter the student's name: ";
        cin >> userNameInput;
        studentArray[counter].setName(userNameInput);

        cout << "Please enter the student's GPA: ";
        cin >> userGPAInput;
        studentArray[counter].setGpa(userGPAInput);

        cout << "\n";
        studentArray[counter].display();
        cout << "======\n\n";
    }  // End of the for loop for processing the array of objects.
    
    return 0;
}  // End of main method.