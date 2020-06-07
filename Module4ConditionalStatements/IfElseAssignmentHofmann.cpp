/*  IfElseAssignmentHofmann.cpp || Nick Hofmann 6/7/2020
    nickhofmann1989@hotmail.com | nohofmann@dmacc.edu

    This program will ask the user for a score between 1 and 10, determine if it is a
    passing grade (70% or more is a passing grade). It then outputs a message stating
    whether or not it is a passing grade to the user.

*/
#include <iostream>
using namespace std;

int main()
{

    int userTestScore;

    cout << "Please enter a test score between 1 and 10: ";
    cin >> userTestScore;

    if (userTestScore >= 7) {

        cout << "\nThe test score of " << userTestScore << " is a passing grade!\n\n";

    }
    else {

        cout << "\nThe test score of " << userTestScore << " is a failing grade :(\n";
        cout << "...might as well join the circus I guess.\n\n";

    }
    return 0;

}// End of main method