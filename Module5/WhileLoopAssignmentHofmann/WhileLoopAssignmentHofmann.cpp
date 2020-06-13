/*  WhileLoopAssignmentHofmann.cpp || Nick Hofmann 6/12/2020
    nickhofmann1989@hotmail.com | nohofmann@dmacc.edu

    This program will demonstrate the use of while loops.

*/
#include <iostream>
using namespace std;

int main()
{
    // VARIABLE DECLARATIONS
    int counter = 0;
    string loopContinue = "y";// I changed the type of loopContinue to a string so that 'yy' didn't allow the loop

    cout << "'counter' starting value is: " << counter << "\n";


    while (loopContinue == "y")
    {
        // Increments the counter variable before printing the value so that the first time the counter enters
        // the loop, it equals 1.
        counter++;
        cout << "\nInside loop - 'counter' value is: " << counter << endl; // Continue only if yes.

        cout << "Would you like to continue? (y/n) ";
        cin >> loopContinue;

    }

    // Printing this out after the loop so that it totals up the exact number of times the loop was ran.
    cout << "\nLoop complete - 'counter' ending value is: " << counter << "\n\n";

    return 0;
}// End of main method