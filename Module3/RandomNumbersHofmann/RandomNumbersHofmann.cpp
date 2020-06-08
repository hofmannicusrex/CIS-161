/*  RandomNumbersHofmann.cpp || Nick Hofmann 6/6/2020
    nickhofmann1989@hotmail.com | nohofmann@dmacc.edu

    This program prompts the user to enter the number of random numbers they
    would like to be displayed. It will output the value of RAND_MAX at the end
    as well.

*/

#include <iostream> // Needed for cout and cin.
#include <cstdlib> // Needed for rand and srand.
#include <ctime> // Needed for the time function.
using namespace std;

int main()
{
    int counter = 0; // Variable for counting the loop
    // Declare and initialize a variable for use as a sentinel value, numRandomNumbers
    int numRandomNumbers;
    // Utilized the time function to get different random numbers each time.
    unsigned seed = time(0);
    srand(seed);

    // Prompt user for input of number of random numbers to be display
    cout << "How many random numbers would you like to see? ";
    cin >> numRandomNumbers;
    cout << endl;

    // input numRandomNumbers from user
    while (counter < numRandomNumbers)
    {
        // output next random number
        cout << counter + 1 << ": " << rand() << endl;
        counter++;  // NOTE: use of unary increment operator
    }// End of while loop

    // Output the value of RAND_MAX in bright green.
    cout << "\n\nThe value of RAND_MAX is: " << "\x1b[92m" << RAND_MAX << "\x1b[0m" << endl;
    return 0;
}// End of main method