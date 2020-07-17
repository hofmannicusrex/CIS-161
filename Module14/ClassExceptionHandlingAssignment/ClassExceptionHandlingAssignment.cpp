/*  ClassExceptionHandlingAssignment.cpp || Nick Hofmann 7/16/2020
    nickhofmann1989@hotmail.com | nohofmann@dmacc.edu

    This program will demonstrate exception handling with classes.

*/
#include "TestScores.h"
#include<iostream>
using namespace std;

int main()
{
    // VARIABLE DECLARATIONS
    const int ARRAY_SIZE = 11;
    int testScores[ARRAY_SIZE] = {78, 85, 98, 100, 92, 83, 89, 86, 88, 92};

    TestScores testScoresObjectOne = TestScores(testScores);
        
    cout << testScoresObjectOne.averageTestScores();

    return 0;
}  // End of main method.