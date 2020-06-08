/*  MenuWithSwitchHofmann.cpp || Nick Hofmann 6/8/2020
    nickhofmann1989@hotmail.com | nohofmann@dmacc.edu

    This program will prompt the user for the number that is associated
    with a food/beverage item from the food truck and how many they would
    like to purchase. It will then display the total cost of the user's order.

*/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

    //VARIABLE DECLARATIONS
    int userSelection, selectionQuantity, tacoPrice, burritoPrice, canOfPopPrice, totalOrderPrice;
    string taco, burrito, canOfPop;

    // Monetary values of each selection in USD.
    tacoPrice = 2;
    burritoPrice = 3;
    canOfPopPrice = 1;
    // Assigning values to the string variables.
    taco = "taco";
    burrito = "burrito";
    canOfPop = "pop";

    // Prompt the user for their food/beverage selection.
    cout << "Welcome! Below is our menu. Remember: it's about quality not quantity!\n";
    cout << "\n\t||||||||||||||||||||||";
    cout << "\n\t|||                |||";
    cout << "\n\t||| 1 - Taco       |||";
    cout << "\n\t||| 2 - Burrito    |||";
    cout << "\n\t||| 3 - Can of pop |||";
    cout << "\n\t|||                |||";
    cout << "\n\t||||||||||||||||||||||";
    cout << "\n\n    Please enter your order number: ";
    cin >> userSelection;
    // Ask them how many of that item they would like to order.
    cout << "\n    How many of those would you like? ";
    cin >> selectionQuantity;

    switch (userSelection)
    {
        case 1:
            totalOrderPrice = tacoPrice * selectionQuantity;
            cout << "\n    You ordered " << selectionQuantity << " " << taco << "s.\n"
                 << "    That brings your total to: $" << fixed << setprecision(2)
                 << static_cast<double>(totalOrderPrice) << ".\n\n";
            break;
        case 2:
            totalOrderPrice = burritoPrice * selectionQuantity;
            cout << "\n    You ordered " << selectionQuantity << " " << burrito << "s.\n"
                 << "    That brings your total to: $" << fixed << setprecision(2)
                 << static_cast<double>(totalOrderPrice) << ".\n\n";
            break;
        case 3:
            totalOrderPrice = canOfPopPrice * selectionQuantity;
            cout << "\n    You ordered " << selectionQuantity << " cans of " << canOfPop << ".\n"
                 << "    That brings your total to: $" << fixed << setprecision(2)
                 << static_cast<double>(totalOrderPrice) << ".\n\n";
            break;
        default:
            cout << "\n\n    Sorry but that is not a valid order number.\nThe only options are 1, 2, or 3.\n\n";
            break;
    }
    return 0;
}// End of main method