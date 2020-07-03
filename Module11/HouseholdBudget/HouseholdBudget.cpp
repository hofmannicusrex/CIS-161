/*  HouseholdBudget.cpp || Nick Hofmann 7/2/2020
    nickhofmann1989@hotmail.com | nohofmann@dmacc.edu

    This program will gather the monthly expenses for a household from the user. It will then
    output a summary based on the information they entered.

*/

#include <iostream>
#include <iomanip>
#include "HouseholdBudget.h"
using namespace std;

// Struct representing a household's monthly budget.
struct HouseholdBudget
{
    int rent;         // Monthly rent payment.
    double gas;       // Monthly gas bill.
    double water;     // Monthly water bill.
    int garbage;      // Monthly garbage bill.
    string donation;  // Charitable donations? I'm not entirely sure.
    double total;     // The sum of rent, gas, water, and garbage.
};

int main()
{
    // VARIABLE DECLARATIONS
    const int NUMBER_OF_MONTHS = 4;    // Controls the size of the structure array.
    int rentTotalAccumulator = 0;      // Accumulator for the rent total.
    double gasTotalAccumulator = 0;    // Accumulator for the gas total.
    double waterTotalAccumulator = 0;  // Accumulator for the water total.
    int garbageTotalAccumulator = 0;   // Accumulator for the garbage total.
    double grandTotalAccumulator = 0;  // Accumulator for the grand total.

    HouseholdBudget months[NUMBER_OF_MONTHS];  // Structure array for number of months to budget.

    cout << "Welcome to the monthly household budget planning program!\n\n";

    for (int counter = 0; counter < NUMBER_OF_MONTHS; counter++)
    {
        cout << "\nEnter the amount of rent due for month " << (counter + 1) << ": ";
        cin >> months[counter].rent;

        cout << "\nEnter the amount of the gas bill due for month " << (counter + 1) << ": ";
        cin >> months[counter].gas;

        cout << "\nEnter the amount of the water bill due for month " << (counter + 1) << ": ";
        cin >> months[counter].water;

        cout << "\nEnter the amount of the garbage bill due for month " << (counter + 1) << ": ";
        cin >> months[counter].garbage;

        cout << "\nEnter the amount of charitable donations for month " << (counter + 1) << ": ";
        cin >> months[counter].donation;
        cout << endl;

        // TOTALS ACCUMULATION
        rentTotalAccumulator += months[counter].rent;
        gasTotalAccumulator += months[counter].gas;
        waterTotalAccumulator += months[counter].water;
        garbageTotalAccumulator += months[counter].garbage;
        grandTotalAccumulator += months[counter].rent + months[counter].gas
            + months[counter].water + months[counter].garbage;
    }  // End of for loop used for gathering user input.

    // Printing out the summary information to the user.
    cout << fixed << showpoint << setprecision(2);
    cout << "\n\nGrand total for all " << NUMBER_OF_MONTHS << " months: $" << grandTotalAccumulator;
    cout << "\nAverage rent cost: $" << (static_cast<double>(rentTotalAccumulator) / NUMBER_OF_MONTHS);
    cout << "\nAverage gas cost: $" << (gasTotalAccumulator / NUMBER_OF_MONTHS);
    cout << "\nAverage water cost: $" << (waterTotalAccumulator / NUMBER_OF_MONTHS);
    cout << "\nAverage garbage cost: $" << (static_cast<double>(garbageTotalAccumulator) / NUMBER_OF_MONTHS);
    cout << "\n\nYour charitable donations aren't totaled here: that's not why we give! :)\n\n";

    return 0;
} // End of main method