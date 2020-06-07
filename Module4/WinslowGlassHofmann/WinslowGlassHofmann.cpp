/*  WinslowGlassHofmann.cpp || Nick Hofmann 6/7/2020
    nickhofmann1989@hotmail.com | nohofmann@dmacc.edu

    This program will prompt the user for the number of Winslow Bottles
    that they would like to purchase. It will then 

*/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // VARIABLE DECLARATIONS
    const int BOTTLE_COST = 24; // Price of one Winslow glass bottle.
    int numberOfBottles;
    double priceWithoutDiscount, discountPercent, priceOfDiscount, salePrice, totalOrderPrice;
    discountPercent = 0;

    cout << "Thanks for choosing Winslow Glass!\n\n";
    cout << "How many bottles would you like to purchase? ";
    cin >> numberOfBottles;

    // If statement to determine the discount percentage.
    if (numberOfBottles <= 10) {
        // Discount percentage for orders of 10 bottles or less.
        discountPercent = 0;
    }
    else if (numberOfBottles <= 15) {
        // Discount percentage for orders of 15 bottles or less.
        discountPercent = .10;
    }
    else if (numberOfBottles <= 20) {
        // Discount percentage for orders of 20 bottles or less.
        discountPercent = .20;
    }
    else if (numberOfBottles <= 30) {
        // Discount percentage for orders of 30 bottles or less.
        discountPercent = .30;
    }
    else if (numberOfBottles >= 31){
        // Discount percentage for orders of more than 30 bottles.
        discountPercent = .35;
    }// End of if - else if statement

    // Calculate the price of the order with no bulk discounts.
    priceWithoutDiscount = (numberOfBottles * BOTTLE_COST);

    // Calculate the amount of money saved on the order due to the discount.
    priceOfDiscount = (priceWithoutDiscount * discountPercent);

    // Calculate the price of the order with bulk discounts applied. ||| S = p - (rp) |||
    salePrice = priceWithoutDiscount - (priceWithoutDiscount * discountPercent);

    cout << "\n\nHere's what the sale price is without discounts: $" << fixed << setprecision(2)
         << priceWithoutDiscount << endl;
    cout << "Discount percentage: " << fixed << setprecision(0) << (discountPercent * 100) << "%\n";
    cout << "Amount the discount saved you: $" << fixed << setprecision(2) << priceOfDiscount;
    cout << "\n\nFinal sale price: $" << salePrice << "\n\n";

    return 0;
}// End of main method