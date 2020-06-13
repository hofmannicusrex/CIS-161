/*  DoWhileLoopAssignmentHofmann.cpp || Nick Hofmann 6/13/2020
    nickhofmann1989@hotmail.com | nohofmann@dmacc.edu

    This program will demonstrate the use of do-while loops.

    1. Display the initial value of the counter variable.
    2. Dispaly the value of the counter variable upon its first entrance to the loop
       and then prompt the user if they would like to continue the loop.
    3. As soon as the loop condition isn't being met: exit the loop, display the final
       value of the counter variable, and return 0.

*/
#include <iostream>
using namespace std;

int main()
{

    //               TEST TABLE
    //    |  User Input  |    Result    |
    //     -----------------------------
    //          y         continue loop
    //         yy           end loop
    //         yes        continue loop
    //          n           end loop
    //         no           end loop
    //         Yes        continue loop
    //          Y         continue loop

    // VARIABLE DECLARATIONS
    int counter = 0;
    // I changed the type of loopContinue to a string so that 'yy' didn't allow the loop to continue
    string loopContinue = "y";

    cout << "'counter' starting value is: " << counter << "\n";

    do
    {
        // Increments the counter variable before printing the value so that the first time
        // the counter enters the loop, it equals 1.
        counter++;
        cout << "\nInside loop - 'counter' value is: " << counter << endl; // Continue only if yes.

        cout << "Would you like to continue entering values? (y/n) ";
        cin >> loopContinue;
        
        // This program is very simple so not much needed to be changed. I added more contiue conditions.
    } while (loopContinue == "y" || loopContinue == "Y" || loopContinue == "Yes" || loopContinue == "yes");

    // Printing this out after the loop so that it totals up the exact number of times the loop was ran.
    cout << "\nLoop complete - 'counter' ending value is: " << counter << "\n\n";

    return 0;
} // End of main method