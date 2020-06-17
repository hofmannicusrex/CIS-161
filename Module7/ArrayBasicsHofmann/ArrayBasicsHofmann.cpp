/*  OverloadFunctionAssignmentHofmann.cpp || Nick Hofmann 6/16/2020
	nickhofmann1989@hotmail.com | nohofmann@dmacc.edu

	This program will demonstrate the basics of using arrays in C++.

	If I had used user input to populate this array then a test table may
	have looked like this:

					TEST TABLE
				------------------
				 USER INPUT			 OUTPUT
				 --------------------------
				hours[0] = 1		   1
				hours[1] = 2		   2
				hours[2] = 3		   3
				hours[3] = 4		   4
				hours[4] = 5		   5
				hours[5] = 6		   6

				hours[0] = 6		   6
				hours[1] = 5		   5
				hours[2] = 4		   4
				hours[3] = 3		   3
				hours[4] = 2		   2
				hours[5] = 1		   1
*/
#include <iostream>
using namespace std;

int main()
{
	// VARIABLE DECLARATIONS
	// Constant to control the size of the array
	const int NUMBER_OF_ITEMS = 6;
	// Initializes the hours[] array with 'NUMBER_OF_ITEMS' indices.
	int hours[NUMBER_OF_ITEMS];

	hours[0] = 20;
	hours[1] = 12;
	hours[2] = 40;
	hours[3] = 30;
	hours[4] = 30;
	hours[5] = 15;

	// For loop for printing out the contents of the hours[] array.
	for (int counter = 0; counter < NUMBER_OF_ITEMS; counter++)
	{
		cout << hours[counter] << endl;
	}

	return 0;
} // End of main method