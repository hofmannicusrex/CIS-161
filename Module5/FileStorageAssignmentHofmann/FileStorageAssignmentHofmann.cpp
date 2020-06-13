/*  FileStorageAssignmentHofmann.cpp || Nick Hofmann 6/13/2020
    nickhofmann1989@hotmail.com | nohofmann@dmacc.edu

    This program will demonstrate the use of reading and writing to files by reading
    the numbers from a file until it hits a sentinel value of -999. It will then add
    all of those numbers together, print out the sum total and the average of them as
    well as output the numbers and sentinel value to an output file named scoresout.txt.
    
*/
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    // VARIABLE DECLARATIONS
    ifstream scoresInputFile;
    ofstream scoresOutputFile;

    scoresInputFile.open("scores.txt"); // Opens scores.txt
    scoresOutputFile.open("scoresout.txt"); // Opens scoresout.txt
    
    if (scoresInputFile) // If the file got opened.
    {
        const int SENTINEL_VALUE = -999;
        int currentValue = 0, sumTotal = 0, loopCounter = 0;
        double numberAverage = 0;

        while (currentValue != SENTINEL_VALUE)
        { // test while loop later by putting -999 at the start of the file...might need to be a do-while loop
            
            scoresInputFile >> currentValue;
            scoresOutputFile << currentValue << "\n";
            //cout << currentValue << endl;

            if (currentValue != SENTINEL_VALUE)
            {
                sumTotal += currentValue;
                //cout << "sumTotal value: " << sumTotal << endl;

                loopCounter++;
            }
        }
        //cout << "Outside of while loop - sumTotal value is now: " << sumTotal << endl;

        numberAverage = static_cast<double>(sumTotal) / static_cast<double>(loopCounter);

        cout << "The sum total of all of the numbers is: " << sumTotal;
        cout << "\n\nThe average of those numbers is: " << numberAverage << endl;
    }
    else { // If the file didn't get opened, end the program.
        cout << "The file didn't get opened.\n";
    }

    scoresInputFile.close(); // Makes sure to close the file I'm reading from.
    scoresOutputFile.close(); // Makes sure to close the file I'm writing to.
    return 0;
}  // End of main method