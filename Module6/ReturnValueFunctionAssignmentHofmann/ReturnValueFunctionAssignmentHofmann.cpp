/*  ReturnValueFunctionAssignmentHofmann.cpp || Nick Hofmann 6/15/2020
	nickhofmann1989@hotmail.com | nohofmann@dmacc.edu

	This program will ask the user for four integer temperatures and then return the average.
	Demonstating functions with return types.

*/
#include <iostream>
using namespace std;

// PROTOTYPES
double averageFourTemperature(int one, int two, int three, int four);

int main()
{
	// VARIABLE DECLARATIONS
	int userTemp1, userTemp2, userTemp3, userTemp4;

	cout << "Please enter a temperature: ";
	cin >> userTemp1;

	cout << "Please enter a second temperature: ";
	cin >> userTemp2;

	cout << "Please enter a third temperature: ";
	cin >> userTemp3;

	cout << "Finally, please enter a fourth temperature: ";
	cin >> userTemp4;

	// Function call
	double averageTemp = averageFourTemperature(userTemp1, userTemp2, userTemp3, userTemp4);
	
	cout << "\nThe average of those four temperatures is: " << averageTemp << "\n\n";

	return 0;
} // End of main method

double averageFourTemperature(int temp1, int temp2, int temp3, int temp4)
{
	int sumTemperature = temp1 + temp2 + temp3 + temp4;
	double averageTemperature = double(sumTemperature) / 4;

	return averageTemperature;
} // End of averageFourTemperature() function.