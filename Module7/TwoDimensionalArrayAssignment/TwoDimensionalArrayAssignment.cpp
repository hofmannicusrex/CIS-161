/*  TwoDimensionalArrayAssignment.cpp || Nick Hofmann 6/22/2020
	nickhofmann1989@hotmail.com | nohofmann@dmacc.edu

	This program will .
*/
#include <iostream>
#include <iomanip>
using namespace std;

// GLOBAL CONSTANTS
const int ARRAY_WEEKDAYS = 7;
const int ARRAY_MONKEYS = 3;

// PROTOTYPES
double average(int, int);
int greatest(const int[ARRAY_MONKEYS][ARRAY_WEEKDAYS]);
int least(const int[ARRAY_MONKEYS][ARRAY_WEEKDAYS]);

int main()
{
	// VARIABLE DECLARATIONS
	int monkeyFoodMonitoring[ARRAY_MONKEYS][ARRAY_WEEKDAYS];
	int averageDenominator = ARRAY_MONKEYS * ARRAY_WEEKDAYS;
	double monkeyFoodTotal = 0;
	
	for (int monkeyCounter = 0; monkeyCounter < ARRAY_MONKEYS; monkeyCounter++)
	{
		for (int dayCounter = 0; dayCounter < ARRAY_WEEKDAYS; dayCounter++)
		{
			cout << "How many pounds of food did monkey #" << (monkeyCounter + 1) << " eat on day "
				 << (dayCounter + 1) << "? ";
			cin >> monkeyFoodMonitoring[monkeyCounter][dayCounter];
			
			monkeyFoodTotal += monkeyFoodMonitoring[monkeyCounter][dayCounter];

			while (monkeyFoodMonitoring[monkeyCounter][dayCounter] < 0)
			{ // While loop for input validation. Can't leave the loop until input is valid.
				cout << "\nThe amount of food can't be negative; please try again.";
				cout << "\n\nHow many pounds of food did monkey #" << (monkeyCounter + 1) << " eat on day "
					<< (dayCounter + 1) << "? ";
				cin >> monkeyFoodMonitoring[monkeyCounter][dayCounter];
			}
		}
	}

	cout << fixed << showpoint << setprecision(3);
	cout << "\n\nThe three monkeys together ate " << average(monkeyFoodTotal, averageDenominator)
		 << " pounds of food per day on average.";

	cout << "\n\nThe least food that any single monkey ate was: " << least(monkeyFoodMonitoring);

	cout << "\n\nThe most food that any single monkey ate was: " << greatest(monkeyFoodMonitoring) << "\n\n";

	return 0;
} // End of main method

double average(int foodTotal, int denominator)
{
	double average = 0;

	average = double(foodTotal) / denominator;

	return average;
} // End of average function.

int greatest(const int importedArray[ARRAY_MONKEYS][ARRAY_WEEKDAYS])
{
	/*The greatest() function finds the most food eaten by a single monkey in one day.*/
	int mostFoodEaten = importedArray[0][0];

	for (int monkeyCounter = 0; monkeyCounter < ARRAY_MONKEYS; monkeyCounter++)
	{
		for (int dayCounter = 0; dayCounter < ARRAY_WEEKDAYS; dayCounter++)
		{
			if (importedArray[monkeyCounter][dayCounter] > mostFoodEaten)
			{
				mostFoodEaten = importedArray[monkeyCounter][dayCounter];
			}
		}
	}

	return mostFoodEaten;
} // End of greatest() function.

int least(const int importedArray[ARRAY_MONKEYS][ARRAY_WEEKDAYS])
{
	/*The least() function finds the least food eaten by a single monkey in one day.*/
	int leastFoodEaten = importedArray[0][0];

	for (int monkeyCounter = 0; monkeyCounter < ARRAY_MONKEYS; monkeyCounter++)
	{
		for (int dayCounter = 0; dayCounter < ARRAY_WEEKDAYS; dayCounter++)
		{
			if (importedArray[monkeyCounter][dayCounter] < leastFoodEaten)
			{
				leastFoodEaten = importedArray[monkeyCounter][dayCounter];
			}
		}
	}

	return leastFoodEaten;
} // End of least() function.