/*  ConditionalOperatorHofmann.cpp || Nick Hofmann 6/7/2020
    nickhofmann1989@hotmail.com | nohofmann@dmacc.edu

    This program will ask the user for a score between 1 and 6, determine if it is a
    passing grade (70% or more is a passing grade). It then outputs a message stating
    whether or not it is a passing grade to the user.

*/
#include <iostream>
using namespace std;

int conditionalOperatorMain()
{

    int userTestScore, passingTestScore;
    string passingGradeMessage, failingGradeMessage;

    passingTestScore = 7;
    passingGradeMessage = "That score is a passing grade!";
    failingGradeMessage = "I'm sorry but that score is a failing grade.";

    cout << "Please enter a test score between 1 and 6: ";
    cin >> userTestScore;

    cout << failingGradeMessage << ((userTestScore < passingTestScore) ? failingGradeMessage : passingGradeMessage) << ((userTestScore >= passingTestScore) ? failingGradeMessage : passingGradeMessage);

    return 0;

}// End of main method