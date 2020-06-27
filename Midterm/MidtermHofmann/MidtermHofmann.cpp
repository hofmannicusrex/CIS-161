/*  MidtermHofmann.cpp || Nick Hofmann 6/27/2020
    nickhofmann1989@hotmail.com | nohofmann@dmacc.edu

    This program will ask a user to enter a number between 1 and 100 and will keep prompting
    for a number in that range if a number is entered that is not within that range.

*/
#include <iostream>
#include <iomanip>
using namespace std;

// FUNCTION PROTOTYPES
double testAverage(int);

int main()
{
    // VARIABLE DECLARATIONS
    int userInput = 0;
    int scoreTotal = 0;
    const int LOOP_CONTROL = 10;  // Number of times that the userInput for loop will be run.
    const int RANGE_BASEMENT = 0;  // Lowest possible test score.
    const int RANGE_CEILING = 10;  // Highest possible test score.
    
    // A brief explanation to the user of what I want from them.
    cout << "Welcome, you will be asked to enter 10 test scores within a valid range (0-10).\n";
    cout << "Once you have done that, the program will tell you the average of those 10 scores.\n";

    for (int counter = 0; counter < LOOP_CONTROL; counter++)
    {

        cout << "\nPlease enter a test score in the range of 0-10: ";
        cin >> userInput;

        while (userInput < RANGE_BASEMENT || userInput > RANGE_CEILING)
        {
            cout << "\nSorry but that number isn't between 1 and 100. Please enter a number between 1 and 100: ";
            cin >> userInput;
        }
        
        /*There's no good reason to do this to your user's input but it was asked of me so here it is.

          This is the if/else if statement that adjusted the total test score variable based on the
          midterm instructions.
        */
        if (userInput == 10)
        {
            scoreTotal = (scoreTotal + userInput) * 2;
        }
        else if (userInput == 5)
        {
            scoreTotal = (scoreTotal + userInput) / 2;
        }
        else
        {
            scoreTotal += userInput;
        }
    }

    /* I was using this to more easily test my if/else if statement below.
    cout << "\nscoreTotal: " << scoreTotal << "\n\n";
    */
    
    // Displaying the average of the test scores entered.
    cout << "\nThe average of those test scores is: " << testAverage(scoreTotal) << "\n\n";

    // if/else if statement to output feedback based upon the average test score.
    if (scoreTotal > 100)
    {
        cout << "\nCongratulations! You are TEST WARRIOR!!!\n\n";
    }
    else if (scoreTotal < 100 && testAverage(scoreTotal) > 6)
    {
        cout << "\nGood Job\n\nThat'll do pig, that'll do.\n\n";
    }
    else  // I wanted to add an output line for something that average 6 or below.
    {
        cout << "\nSorry compadre - those scores aren't that good.\n\n";
    }

    return 0;
}// End of main method.

double testAverage(int sumOfTestScores)
{  // This function will calculate the average of the test scores entered by the user.
    // LOCAL VARIABLES
    double testScoreAverage = 0;
    const int numberOfTestScores = 10;

    cout << fixed << setprecision(2);
    testScoreAverage = static_cast<double>(sumOfTestScores) / numberOfTestScores;

    return testScoreAverage;

} // End of testAverage function.