/*  PointersToStructures.cpp || Nick Hofmann 6/27/2020
    nickhofmann1989@hotmail.com | nohofmann@dmacc.edu

    This program will ask the user for information about a student. It will then
    display a summary of the information that was entered by the user.

*/
// This program demonstrates a function that uses a
// pointer to a structure variable as a parameter.
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

struct Student
{
    string name;	 // Student's name
    int idNum;       // Student ID number
    int creditHours; // Credit hours enrolled
    double gpa;		 // Current GPA
    string major;    // Current major
    int SAT;         // SAT score of student - NOT a constant despite the name
};

// FUNCTION PROTOTYPES
void getData(Student*);      // Has the user enter information.
void displayStats(Student*);  // Outputs the information that the user entered.

int main()
{
    Student freshman;

    // Get the student data.
    cout << "Enter the following student data:\n";
    getData(&freshman);    // Pass the address of freshman.
    cout << "\nHere is the student data you entered:\n";
    displayStats(&freshman);

    return 0;
}  // End of main method.

//*******************************************************
// Definition of function getData. Uses a pointer to a  *
// Student structure variable. The user enters student  *
// information, which is stored in the variable.        *
//*******************************************************

void getData(Student* s)
{
    // Get the student name.
    cout << "Student name: ";
    getline(cin, s->name);

    // Get the student ID number.
    cout << "Student ID Number: ";
    cin >> s->idNum;

    // Get the credit hours enrolled.
    cout << "Credit Hours Enrolled: ";
    cin >> s->creditHours;

    // Get the GPA.
    cout << "Current GPA: ";
    cin >> s->gpa;

    // Get their Major.
    cout << "Current Major: ";
    cin >> s->major;

    // Get the SAT score.
    cout << "SAT Score: ";
    cin >> s->SAT;
}  // End of getData(Student* s) function.

void displayStats(Student* studentInfo)
{
    // Now display the data stored in freshman
    cout << setprecision(3);
    cout << "Name: " << studentInfo->name << endl;
    cout << "ID Number: " << studentInfo->idNum << endl;
    cout << "Credit Hours: " << studentInfo->creditHours << endl;
    cout << "GPA: " << studentInfo->gpa << endl;
    cout << "Major: " << studentInfo->major << endl;
    cout << "SAT Score: " << studentInfo->SAT << endl;
} // End of displayStats(Student* studentInfo) function.