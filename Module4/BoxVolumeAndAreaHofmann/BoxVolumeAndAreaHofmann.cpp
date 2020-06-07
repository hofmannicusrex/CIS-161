/*  BoxVolumeAndAreaHofmann.cpp || Nick Hofmann 6/7/2020
    nickhofmann1989@hotmail.com | nohofmann@dmacc.edu

    This program will prompt the user for the length, width, and height of a box.
    It will then calculate and return both the volume of the box and the surface
    area of the box.

*/
#include <iostream>
using namespace std;

int main()
{

    // VARIABLE DECLARATIONS
    double boxLength, boxWidth, boxHeight, boxVolume, boxSurfaceArea;

    cout << "Welcome! This program will display the volume and surface area of a box based off "
         << "of the dimensions you provide.\n\n";
    cout << "Please enter the length of the box: ";
    cin >> boxLength;

    cout << "Please enter the width of the box: ";
    cin >> boxWidth;

    cout << "Please enter the height of the box: ";
    cin >> boxHeight;

    // Calculating the volume of the box.
    boxVolume = (boxLength * boxWidth * boxHeight);
    // Calculating the surface area of the box.
    boxSurfaceArea = ((2 * (boxWidth * boxHeight)) + (2 * (boxLength * boxHeight)) + (2 * (boxWidth * boxLength)));

    cout << "\nThank you.\nThe volume of that box is '" << boxVolume << "'.\n";
    cout << "The surface area of it is '" << boxSurfaceArea << "'.\n\n";

}// End of main method