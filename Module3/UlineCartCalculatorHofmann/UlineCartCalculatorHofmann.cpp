/*  UlineCartCalculatorHofmann.cpp || Nick Hofmann 6/5/2020
    nickhofmann1989@hotmail.com | nohofmann@dmacc.edu

    This program prompts the user to enter the weight of the moving cart and then returns
    the number of cardboard bundles that are on the cart as well as a receipt for the cost
    of the purchase.

*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // VARIABLE DECLARATIONS
    const double SALES_TAX_RATE = .05; // Represents the sales tax rate of 5%.
    const int INITIAL_CART_WEIGHT = 210; // Starting cart weight in kilograms.
    const int U1234_BUNDLE_WEIGHT = 17; // Weight of each 10-pack bundle in kilograms.
    const double U1234_BUNDLE_COST = 19.97; // Cost of a 10-pack bundle: $19.97.
    const double SHIP_COST_PER_BUNDLE = 2.34; // Cost to ship a 10-pack bundle: $2.34.
    int cartWeightPrompt, numberOfBundles;
    double salePrice, salesTax, shippingCost, finalTotal;

    cout << "Enter the weight of the loaded cart: ";
    cin >> cartWeightPrompt;

    // Calculate the number of bundles from the total weight provided.
    numberOfBundles = (cartWeightPrompt - INITIAL_CART_WEIGHT) / 17;

    // Calculate sale price from (cost per bundle * number of bundles).
    salePrice = (U1234_BUNDLE_COST * numberOfBundles);
    // Calculate sales tax from (sale price * sales tax rate).
    salesTax = (salePrice * SALES_TAX_RATE);
    // Calculate shipping cost from (number of bundles * shipping cost per bundle).
    shippingCost = (numberOfBundles * SHIP_COST_PER_BUNDLE);
    // Calculate final total from (sale price + sales tax + shipping cost).
    finalTotal = (salePrice + salesTax + shippingCost);
    
    cout << "\nNumber of 10-pack bundles on the cart: " << numberOfBundles << ".\n";

    // Print out sales receipt. Restricting decimal places to the hundredth place.
    cout.precision(2);
    cout << "\n\n-----------Sales Receipt-----------\n";
    cout << "\nSale Price of " << numberOfBundles << " bundles: $" << fixed << salePrice;
    cout << "\nSales Tax (5%):          $" << salesTax;
    cout << "\nShipping Cost:           $" << shippingCost;
    cout << "\n\n============";
    cout << "\nFinal Total:             $" << finalTotal << "\n\n";
    cout << "-----------Sales Receipt-----------";
    cout << "\n\n\nThank you for shopping U-Line!!!\n\n\n";
    
    return 0;
}// End of main method