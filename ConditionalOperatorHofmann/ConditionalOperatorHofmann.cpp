/*  ConditionalOperatorHofmann.cpp || Nick Hofmann 6/7/2020
    nickhofmann1989@hotmail.com | nohofmann@dmacc.edu

    This program will ask the user for a score between 1 and 6, determine if it is a
    passing grade (70% or more is a passing grade). It then outputs a message stating
    whether or not it is a passing grade to the user.

    Demonstrates the use of the conditional operator.

*/
#include <iostream>
using namespace std;

int main()
{
    // |        Test Table        |        Input        |        Output        |
    //  -----------------------------------------------------------------------
    //                                      4.2            passingGradeMessage
    //                                       5             passingGradeMessage
    //                                      4.19           failingGradeMessage

    // VARIABLE DECLARATIONS
    double userTestScore;
    const double PASSING_TEST_SCORE = 6 * .7;
    string passingGradeMessage, failingGradeMessage;
    // Assigning values to the two string variables.
    passingGradeMessage = "That score is a passing grade!";
    failingGradeMessage = "I'm sorry but that score is a failing grade.";

    cout << "Please enter a test score between 1 and 6: ";
    cin >> userTestScore;
    
    // If userTestScore is < PASSING_TEST_SCORE then output failingGradeMessage, else output passingGradeMessage
    cout << endl << ((userTestScore < PASSING_TEST_SCORE) ? failingGradeMessage : passingGradeMessage) << endl;

    return 0;

}// End of main method