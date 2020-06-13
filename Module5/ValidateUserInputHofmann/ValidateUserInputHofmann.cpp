/*  WhileLoopAssignmentHofmann.cpp || Nick Hofmann 6/13/2020
    nickhofmann1989@hotmail.com | nohofmann@dmacc.edu

    This program will ask a user to enter a number between 1 and 100 and will keep prompting
    for a number in that range if a number is entered that is not within that range.

    There will be an infinite loop if a non-number is entered by the user.

*/
#include <iostream>
using namespace std;

int main()
{
    // VARIABLE DECLARATIONS
    int userInput = 0;
    const int rangeBasement = 1;
    const int rangeCeiling = 100;

    cout << "Please enter a number between 1 and 100: ";
    cin >> userInput;

    // This while loop will only be entered if the first user input is not between 1 and 100.
    while (userInput <= rangeBasement || userInput >= rangeCeiling)
    {

        cout << "\nSorry but that number isn't between 1 and 100. Please enter a number between 1 and 100: ";
        cin >> userInput;

    }
    
    return 0;
}// End of main method.