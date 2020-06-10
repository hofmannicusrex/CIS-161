/*  VoidFunctionParameterAssignmentHofmann.cpp || Nick Hofmann 6/9/2020
	nickhofmann1989@hotmail.com | nohofmann@dmacc.edu

	This program will ask the user for four temperatures, calculate the average and
	then print out the average as well as all four temperatures input by the user.

*/
#include <iostream>
using namespace std;

// PROTOTYPES
void averageFourTemperatures(int temp1, int temp2, int temp3, int temp4);
void calculateAverage(int temp1, int temp2, int temp3, int temp4);
void returnAverageTemperature(int avgTemp, int temp1, int temp2, int temp3, int temp4);

int main()
{
	int temperature1 = 0;
	int temperature2 = 0;
	int temperature3 = 0;
	int temperature4 = 0;

	cout << "You are going to be asked to enter 4 temperatures.\n\n";

	cout << "Enter the first temperature: "; // Get the first temperature.
	cin >> temperature1;

	cout << "Enter the second temperature: "; // Get the second temperature.
	cin >> temperature2;

	cout << "Enter the third temperature: "; // Get the third temperature.
	cin >> temperature3;

	cout << "Enter the fourth temperature: "; // Get the fourth temperature.
	cin >> temperature4;

	// Call averageFourTemperatures and pass the four user inputs to it.
	averageFourTemperatures(temperature1, temperature2, temperature3, temperature4);
	
	return 0;
}// End of main method

void averageFourTemperatures(int temp1, int temp2, int temp3, int temp4) {

	// Call calculateAverage and pass the four user inputs from the main method to it.
	calculateAverage(temp1, temp2, temp3, temp4);
}// End of averageFourTemperatures

void calculateAverage(int one, int two, int three, int four)
{
	// Calculate the average of the four temperatures and assign that to temperatureAverage.
	int temperatureAverage = (one + two + three + 4) / 4;
	
	// Call returnAverageTemperature and pass the four user inputs from the main method to it.
	returnAverageTemperature(temperatureAverage, one, two, three, four);
}// End of returnAverageTemperature

void returnAverageTemperature(int averageTemperature, int uno, int dos, int tres, int cuatro)
{
	// Prints out the information required by the assignment.
	cout << "\nThe average temperature is: " << averageTemperature;
	cout << "\n\nThis was calculated by using these numbers that you input: "
		 << uno << ", " << dos << ", " << tres << ", and " << cuatro;
	cout << "\n\nSpank you very much!\n\n";
}// End of returnAverageTemperature