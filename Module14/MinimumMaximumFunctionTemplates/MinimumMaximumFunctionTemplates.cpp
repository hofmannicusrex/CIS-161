/*  MinimumMaximumFunctionTemplates.cpp || Nick Hofmann 7/20/2020
    nickhofmann1989@hotmail.com | nohofmann@dmacc.edu

    Last Updated: 7/20/2020

    This program will demonstrate function templates. I really don't like how the book
    attempts to explain this concept. Clear as mud.

*/
#include <iostream>
using namespace std;

// FUNCTION TEMPLATE(S)
template <class FunctionTemplate>
FunctionTemplate minimum(FunctionTemplate firstNumber, FunctionTemplate secondNumber)
{
    if (firstNumber < secondNumber)
    {
        return firstNumber;
    }
    else if (secondNumber < firstNumber)
    {
        return secondNumber;
    }
    else
    {
        cout << "Both numbers are equal.";  // This statement does not work as desired.
    }
}

template <class FunctionTemplate>
FunctionTemplate maximum(FunctionTemplate firstNumber, FunctionTemplate secondNumber)
{
    if (firstNumber > secondNumber)
    {
        return firstNumber;
    }
    else if (secondNumber > firstNumber)
    {
        return secondNumber;
    }
    else
    {
        cout << "Both numbers are equal.";  // This statement does not work as desired.
    }
}

int main()
{
    // VARIABLE DECLARATIONS
    int num1 = 1;
    int num2 = 2;
    float num3 = 3;
    double num4 = 4;
    char char1 = ' ';

    // MINIMUM FUNCTION
    cout << "The smaller number of the two numbers: " << num1 << " & " << num2 << " is " << minimum(num1, num2) << ".\n\n";
    cout << "The smaller number of the two numbers: " << num1 << " & " << num2 << " is " << minimum(num2, num1) << ".\n\n";

    // MAXIMUM FUNCTION
    cout << "The larger number of the two numbers: " << num1 << " & " << num2 << " is " << maximum(num1, num2) << ".\n\n";
    cout << "The larger number of the two numbers: " << num1 << " & " << num2 << " is " << maximum(num2, num1) << ".\n\n";

    //cout << "The larger number of the two numbers: " << num1 << " & " << num3 << " is " << maximum(num1, num3) << ".\n\n";
    //cout << "The larger number of the two numbers: " << num1 << " & " << num3 << " is " << maximum(num3, num1) << ".\n\n";

    return 0;
}  // End of main method