// Joe Struss, jastruss@dmacc.edu, June 2018
// Randomly create hotel guests expenses from $50 to $150 for a 100 room hotel as an array then
//   uses a function to count the number of guests with expenses of over $75
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// Function prototypes
int guestExp(int[], int, int);

int main()
{
	const int MIN_VALUE = 50;
	const int MAX_VALUE = 150;
	const int SIZE = 100;
	const int EXP = 75;
	int goodExp = 0.0;
	
	// Create a hotel array with values of 50 to 150 randomly distributed
	int hotel[SIZE];
	
	//    Seed random number generator
	unsigned seed = time(0);
	srand(seed);
	
	cout << "Creating " << SIZE << " random hotel rooms with expenses";
	cout << " from " << MIN_VALUE << " to " << MAX_VALUE << endl;
	cout << endl;
	//    Assign random values to hotel block
	for (int i=0; i < SIZE; i++)
	{
		hotel[i] = (rand() % (MAX_VALUE - MIN_VALUE + 1)) + MIN_VALUE;
		// Value Check
		//cout << i << "=" << hotel[i] << "  ";
 	}
	
	// Use a function to count the number of rooms spending $75 or more
	cout << endl << "Counting the number of hotel rooms with expenses over $" << EXP << endl;
	goodExp = guestExp(hotel, SIZE, EXP);
	
	cout << endl << "The number of rooms out of " << SIZE << " that spent over $";
	cout << EXP << " was " << goodExp << endl;
		
    return 0;
}

//*********************************************************
// This function takes an array, array size and a value then counts 
//  the number of values over that givne value in the array
//  returning that number as an int
//*********************************************************
int guestExp(int array[], int aSize, int hExp)
{
    int total = 0;
    
    cout << endl;
    for(int i = 0; i < aSize; i++)
    {
    	if (array[i] > hExp)
    	{
    		total++;
    		// Value Check
    		//cout << i << "=" << array[i] << "  ";
		}
	}
    
    return total;
}