/*  TypeConversionHofmann.cpp || Nick Hofmann 6/5/2020
    nickhofmann1989@hotmail.com | nohofmann@dmacc.edu

    This program demonstrates type conversion.

*/

#include <limits>
#include <cstddef>
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double castedValue;
    int startingValue = 1337;

    castedValue = static_cast<double>(startingValue);
    cout << "The casted value is: " << setprecision(5) << showpoint << castedValue << endl;

    return 0;
}// End of main method