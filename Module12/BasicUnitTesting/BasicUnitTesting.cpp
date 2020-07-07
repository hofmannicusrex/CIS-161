/*  BasicUnitTesting.cpp || Nick Hofmann 7/7/2020
    nickhofmann1989@hotmail.com | nohofmann@dmacc.edu

    This program will demonstrate basic unit testing via the standard compiler.

*/
#include <iostream>
using namespace std;

/*
 ========================
 ====    FUNCTION    ====
 ====   PROTOTYPES   ====
 ========================
*/
double calculateAverage(int [], const int);

int main()
{
    // VARIABLE DECLARATIONS
    const int ARRAY_SIZE = 20;  // Alter this constant to perform the unit testing (0, 1, 20, 21).
    // Don't care if elements have 0 for values since this is just for testing.
    int arrayForTesting[ARRAY_SIZE] = {200};

    cout << "\n\n\nThe calculateAverage() function returned: "
         << calculateAverage(arrayForTesting, ARRAY_SIZE) << "\n\n\n";

    return 0;
}  // End of main method.

double calculateAverage(int arrayOne[], const int ARRAY_SIZE_PARAMETER)
{
    // LOCAL VARIABLES
    int total = 0;
    int averageDenominator = 0;
    double average = 0;

    // If statement that will be performing the crux of the unit test.
    if (ARRAY_SIZE_PARAMETER < 1 || ARRAY_SIZE_PARAMETER > 20)
    {
        cout << "The size of that arry is not between 1 and 20!";
        return -1;
    }

    for (int counter = 0; counter < ARRAY_SIZE_PARAMETER; counter++)
    {
        // cout << arrayOne[counter] << " | ";

        total += arrayOne[counter];  // Summing each element of the array.

        averageDenominator++;  // Determining the denominator in the average equation.
    }

    // Calculating the average of the array elements.
    average = (static_cast<double>(total) / averageDenominator);

    // cout << "Total: " << total;

    return average;  // Return the average of the array elements.
}  // End of the calculateAverage() function.