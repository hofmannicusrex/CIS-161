/*  PayCalculator || Nick Hofmann 5/30/2020 nickhofmann1989@hotmail.com | nohofmann@dmacc.edu

    This program calculates the user's pay based off of the information gathered from them.

*/

#include <iostream>
using namespace std;

int main()
{

    double hoursWorked, hourlyRate, totalPay;

    // Prompt the user for the number of hours worked.
    cout << "How many hours did you work? ";
    cin >> hoursWorked;

    // Prompt the user for the hourly pay rate.
    cout << "What is your hourly rate of pay? ";
    cin >> hourlyRate;

    // Calculate the pay.
    totalPay = hoursWorked * hourlyRate;

    // Output the result of the totalPay calculation.
    cout << "Your total pay is: $" << totalPay << "." << endl;
    return 0;

}// End of main method