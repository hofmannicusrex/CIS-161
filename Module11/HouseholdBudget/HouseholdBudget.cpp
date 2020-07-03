/*  HouseholdBudget.cpp || Nick Hofmann 7/2/2020
    nickhofmann1989@hotmail.com | nohofmann@dmacc.edu

    This program will gather the monthly expenses for a household from the user. It will then
    output a summary based on the information they entered.

*/

#include <iostream>
#include "HouseholdBudget.h"
using namespace std;

int main()
{
    // Creating HouseholdBudget objects.
    HouseholdBudget casaOne, haciendaTwo, cribThree;

    // Outputting the values for the casaOne HouseholdBudget object. DEFAULT CONTRUCTOR VALUES.
    cout << "Rent Bill for the Month: " << casaOne.getRentBill() << endl;
    cout << "Water Bill for the Month: " << casaOne.getWaterBill() << endl;
    cout << "Garbage Bill for the Month: " << casaOne.getGarbageBill() << endl;
    cout << "Total Bills for the Month: " << casaOne.getTotal() << endl << endl;

    // Using mutator functions to assign values to the haciendaTwo object's various members.
    haciendaTwo.setRentBill(950);
    haciendaTwo.setWaterBill(65.84);
    haciendaTwo.setGarbageBill(35);

    // Outputting the values for the haciendaTwo HouseholdBudget object.
    cout << "Rent Bill for the Month: " << haciendaTwo.getRentBill() << endl;
    cout << "Water Bill for the Month: " << haciendaTwo.getWaterBill() << endl;
    cout << "Garbage Bill for the Month: " << haciendaTwo.getGarbageBill() << endl;
    cout << "Total Bills for the Month: " << haciendaTwo.getTotal() << endl << endl;

    // Using mutator functions to assign values to the cribThree object's various members.
    cribThree.setRentBill(2500);
    cribThree.setWaterBill(195.56);
    cribThree.setGarbageBill(98);

    // Outputting the values for the cribThree HouseholdBudget object.
    cout << "Rent Bill for the Month: " << cribThree.getRentBill() << endl;
    cout << "Water Bill for the Month: " << cribThree.getWaterBill() << endl;
    cout << "Garbage Bill for the Month: " << cribThree.getGarbageBill() << endl;
    cout << "Total Bills for the Month: " << cribThree.getTotal() << endl << endl;

    return 0;
}  // End of main method.