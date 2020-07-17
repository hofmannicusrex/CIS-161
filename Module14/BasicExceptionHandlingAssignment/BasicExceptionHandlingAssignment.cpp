/*  BasicExceptionHandlingAssignment.cpp || Nick Hofmann 7/16/2020
    nickhofmann1989@hotmail.com | nohofmann@dmacc.edu

    This program will demonstrate exception handling.

*/
#include <iostream>
using namespace std;

int multiplyInputs();

int main()
{
    try
    {
        // Outputting the result of the function multiplyInputs(int, int).
        cout << "\n\nThe product of those two numbers is: " << multiplyInputs() << "\n\n";
    }
    catch (string exceptionString)
    {
        cout << exceptionString;
    }

    return 0;
}  // End of main method.

int multiplyInputs()
{
    /// <summary>
    /// This function will take two integers and multiply them to find the result. It will throw
    /// an exception if either number is odd or is not in the range of 1-100.
    /// </summary>
    /// <param name="userInputOne">The first number entered by the user.</param>
    /// <param name="userInputTwo">The second number entered by the user.</param>
    /// <returns>The product of the two parameters.</returns>

    // VARIABLE DECLARATIONS
    int userInputOne = 0;
    int userInputTwo = 0;
    int productOfMultiplication = 0;

    // Gathering first user input.
    cout << "Please enter an even number between 1 and 100: ";
    cin >> userInputOne;

    if (userInputOne < 1 || userInputOne > 100)
    {
        string errorOutOfRange = "\n\nERROR: That number wasn't between 1 and 100!\n\n";
        throw errorOutOfRange;
    }
    else if (userInputOne % 2 != 0)
    {
        string errorNotAnEvenNumber = "\n\nERROR: That number wasn't even!\n\n";
        throw errorNotAnEvenNumber;
    }  // If/else if to throw errors.

    // Gathering second user input.
    cout << "\nPlease enter a second even number between 1 and 100: ";
    cin >> userInputTwo;

    if (userInputTwo < 1 || userInputTwo > 100)
    {
        string errorOutOfRange = "\n\nERROR: That number wasn't between 1 and 100!\n\n";
        throw errorOutOfRange;
    }
    else if (userInputTwo % 2 != 0)
    {
        string errorNotAnEvenNumber = "\n\nERROR: That number wasn't even!\n\n";
        throw errorNotAnEvenNumber;
    }  // If/else if to throw errors.

    productOfMultiplication = userInputOne * userInputTwo;

    return productOfMultiplication;
}