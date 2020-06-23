/*  FunctionsAndArrayAlgorithms.cpp || Nick Hofmann 6/22/2020
	nickhofmann1989@hotmail.com | nohofmann@dmacc.edu

	This program will demonstrate several different array algorithms using functions.
*/
#include <iostream>
using namespace std;

// PROTOTYPES
void getNumber(int [], int);
int findMax(const int[], int);
int findMin(const int[], int);
int find(const int[], int);

int main()
{
	// VARIABLE DECLARATIONS
	const int ARRAY_SIZE = 7;
	int arrayForManipulation[ARRAY_SIZE];

	// This function call will "import" the values that the user populated the array with inside
	// the getNumber function.
	getNumber(arrayForManipulation, ARRAY_SIZE);

	cout << "\nThe contents of that array are as follows:\n\n";

	for (int counter = 0; counter < ARRAY_SIZE; counter++)
	{// This for loop will print out the results of the getNumber function.
		cout << "In index " << counter << " of the array, " << arrayForManipulation[counter]
			 << " is the value." << endl;
	}
	
	cout << "\nThe largest integer inside the array is: " << findMax(arrayForManipulation, ARRAY_SIZE) << endl;

	cout << "\nThe smallest integer inside the array is: " << findMin(arrayForManipulation, ARRAY_SIZE) << endl;

	cout << "\nThe value stored in that index is: " << find(arrayForManipulation, ARRAY_SIZE) << "\n\n";

	return 0;
} // End of main method

void getNumber(int importedArray[], int size)
{
	/*The getNumber function asks the user to enter integers to populate an
	array whose size is dictated by a constant in the main method.*/
	for (int counter = 0; counter < size; counter++)
	{
		// Collecting an integer from the user during each completion of the loop.
		cout << "Please enter an integer: ";
		cin >> importedArray[counter];
	}

} // End of getNumber() function.

int findMax(const int importedArray[], int size)
{
	/*The findMax function finds the highest-valued integer in the array.*/
	int highestNumber = importedArray[0];

	for (int counter = 0; counter < size; counter++)
	{
		if (importedArray[counter] > highestNumber)
		{
			highestNumber = importedArray[counter];
		}
	}

	return highestNumber;
} // End of findMax() function.

int findMin(const int importedArray[], int size)
{
	/*The findMin function finds the lowest-valued integer in the array.*/
	int lowestNumber = importedArray[0];

	for (int counter = 0; counter < size; counter++)
	{
		if (importedArray[counter] < lowestNumber)
		{
			lowestNumber = importedArray[counter];
		}
	}

	return lowestNumber;
} // End of findMin() function.

int find(const int importedArray[], int size)
{
	/*The find function will return the value stored in the index that the user enters. The only reason I am
	passing in the array's size as a parameter is so that the user would be able to know the size of the array.
	If they didn't know that, they would probably prompt for something out of bounds frequently. It returns 0
	if the index they enter is outside the bounds of the array.*/
	int userIndexChoice;

	cout << "\nThe array has " << size << " elements. Keep in mind that the counting starts at 0.";
	cout << "\nThis means that the first element of the array starts at 0 and the last element is at " << size - 1 << ".";
	cout << "\n\nWhat index do you want to check the value of? ";
	cin >> userIndexChoice;

	if (userIndexChoice >= size)
	{
		cout << "\n\nThat index does not exist: the highest index in the array is " << size - 1 << ".\n";
		cout << "\nReturning zero instead...\n\n";
		return 0;
	}

	return importedArray[userIndexChoice];
} // End of find() function.