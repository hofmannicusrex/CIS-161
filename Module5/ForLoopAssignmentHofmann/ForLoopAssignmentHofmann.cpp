/*  ForLoopAssignmentHofmann.cpp || Nick Hofmann 6/13/2020
    nickhofmann1989@hotmail.com | nohofmann@dmacc.edu

    This program will demonstrate the use of for loops.

    1. Create a constant for the number of loop repetitions
    2. Make a for loop that takes user input for a set number of test scores
       and sort of formats the output.
    3. Does NOT validate user input.

*/
#include <iostream>
using namespace std;

int main()
{

    // VARIABLE DECLARATIONS
    const int LOOP_LENGTH = 10;

    for (int counter = 1; counter <= LOOP_LENGTH; counter++)
    // I initialized counter to 1 so that I didn't have to print 'cout << counter + 1'
    // for the output and adjusted the test/continue condition to be <= LOOP_LENGTH.
    {
        // Initializing the user input variable inside the foor loop because I think it
        // will only take up memory inside the loop if I understood that concept correctly.
        int userTestScore;
        cout << "Please enter a test score between 0 and 100: ";
        cin >> userTestScore;

        cout << "Test number " << counter << " is " << userTestScore << "%\n\n";
    }  // End of for loop

    return 0;
}  // End of main method

/*             TEST TABLE
    |  User Input  |    Result    |
     -----------------------------
          75         Test number 5 is 75%
          45         Test number 5 is 45%
          10         Test number 5 is 10%
          100        Test number 5 is 100%
          0          Test number 5 is 0%
*/