/*  ArrayElementsAverageAssignment.cpp || Nick Hofmann 6/20/2020
	nickhofmann1989@hotmail.com | nohofmann@dmacc.edu

	This program will get a set number of temperatures from the user (based on the value of a constant).
	It will then find the average of all of those temperatures and print it out showing two decimal
	places.

*/
#include <iostream>
#include <iomanip>
using namespace std;

// PROTOTYPES
double averageFourTemperature(int sumTemperature, int array_size);

int main()
{
	// VARIABLE DECLARATIONS
	const int ARRAY_SIZE = 5;
	int temperatures[ARRAY_SIZE];
	int sumTotal = 0;

	for (int counter = 0; counter < ARRAY_SIZE; counter++) // Standard For Loop
	{
		// Collecting a temperature from the user during each completion of the loop.
		cout << "Please enter a temperature: ";
		cin >> temperatures[counter];
	}

	for (int temps : temperatures) // Range-Based For Loop
	{
		// Accumulating each index value in temperatures[] inside the sumTotal variable.
		sumTotal += temps;
	}

	// Function call
	double averageTemp = averageFourTemperature(sumTotal, ARRAY_SIZE);

	cout << "\nThe average of those four temperatures is: " << fixed << showpoint << setprecision(2)
		 << averageTemp << "\n\n";

	return 0;
} // End of main method

double averageFourTemperature(int sumTemperature, int array_size)
{
	double averageTemperature = double(sumTemperature) / array_size;
	
	return averageTemperature;
} // End of averageFourTemperature() function.

/*

				TEST TABLE
				----------
	1st Temp |     1
	2nd Temp |     2
	3rd Temp |     3
	4th Temp |     4
	5th Temp |     5
			---------
		RESULT = 3.00

	1st Temp |     5
	2nd Temp |     6
	3rd Temp |     9
	4th Temp |     9
	5th Temp |     48
			---------
		RESULT = 15.40

	1st Temp |     56
	2nd Temp |     98
	3rd Temp |     86
	4th Temp |     48
	5th Temp |     4
			---------
		RESULT = 58.40

*/