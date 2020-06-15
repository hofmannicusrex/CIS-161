/*  VoidFunctionAssignmentHofmann.cpp || Nick Hofmann 6/15/2020
	nickhofmann1989@hotmail.com | nohofmann@dmacc.edu

	This program will keep asking the user for to enter temperatures. It will exit if they
	enter the sentinel value of '-999'.

*/
#include <iostream>
using namespace std;

// PROTOTYPES
void averageTemperature();

int main()
{
	// Function call
	averageTemperature();

	return 0;
} // End of main method

void averageTemperature()
{
	// LOCAL VARIABLE DECLARATIONS
	const int SENTINEL_VALUE = -999;
	int userInput = 0;
	// Initializing loopCounter as -1 since the loop will always be run at least one time. I
	// could have just used (loopCounter - 1) as my denominator when calculating average instead.
	int loopCounter = -1;
	int sumTemperature = 0;
	double averageTemp = 0;

	do
	{

		cout << "Please enter an integer value for the temperature: (-999 to quit) ";
		cin >> userInput;

		loopCounter++;
		sumTemperature += userInput;

	} while (userInput != SENTINEL_VALUE);

	sumTemperature += 999; // Negates the sentinel value...there's probably a better way?
	averageTemp = double(sumTemperature) / loopCounter;

	cout << "\nThe average of those temperatures is: " << averageTemp << endl;

} // End of averageTemperature() function