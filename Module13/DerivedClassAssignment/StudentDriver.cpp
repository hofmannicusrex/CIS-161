/*  StudentDriver.cpp || Nick Hofmann 7/8/2020
    nickhofmann1989@hotmail.com | nohofmann@dmacc.edu

    This is the driver file for the Person and Student classes.

*/
#include "Person.h"
#include "Student.h"
#include<iostream>
using namespace std;

int main()
{
    // Person person1("Patrick", "Stewart", "Sir"); // COMMENTED OUT SINCE ASSIGNMENT DOESN'T REQUIRE IT
    Student student1("Nicholas", "Hofmann", "The Magnificent", "Student Extraordinaire");

    // cout << person1.print() << "\n\n"; // COMMENTED OUT SINCE ASSIGNMENT DOESN'T REQUIRE IT
    cout << student1.print() << "\n\n\n";

    /* DEMONSTRATES THE USE OF THE ACCESSOR FUNCTIONS
    cout << "Student First Name: " << student1.getFirstName() << "\n";
    cout << "Student Last Name: " << student1.getLastName() << "\n";
    cout << "Student Honorific: " << student1.getHonorific() << "\n";
    cout << "Student Type: " << student1.getType() << "\n\n\n";
    */

    system("pause");

    return 0;
}  // End of main method.