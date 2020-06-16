/*  OverloadFunctionAssignmentHofmann.cpp || Nick Hofmann 6/15/2020
	nickhofmann1989@hotmail.com | nohofmann@dmacc.edu

	This program will demonstrate function overloading. I will use the same function
	name for unique functions that do different things and accept different numbers of
	parameters.

*/
#include <iostream>
using namespace std;

// PROTOTYPES
void knockoffTicketmaster();
void knockoffTicketmaster(int ticketQuantity);
void knockoffTicketmaster(int ticketQuantity, double ticketPrice);
void knockoffTicketmaster(int ticketQuantity, double ticketPrice, string seatingSection);

int main()
{
	// Calling the function that accepts no parameters.
	knockoffTicketmaster();

	// Calling the function that accepts one parameter.
	knockoffTicketmaster(4);

	// Calling the function that accepts two parameters.
	knockoffTicketmaster(3, 89.95);
	
	// Calling the function that accepts three parameters.
	knockoffTicketmaster(2, 117.35, "Balcony");

	return 0;
} // End of main method.

void knockoffTicketmaster()
{
	cout << "This function looks for the most expensive, "
		 << "individual ticket out of all of the sections.\n\n";
} // This one accepts no parameters, it only returns a string - in this simple program.

void knockoffTicketmaster(int ticketQuantity)
{
	cout << "This function will look for the " << ticketQuantity
		 << " most expensive tickets in any section.\n\n";
} // This one just returns one integer value in the middle of a string.

void knockoffTicketmaster(int ticketQuantity, double ticketPrice)
{
	cout << "This function will look for " << ticketQuantity << " tickets wanted at the max price ($"
		 << ticketPrice << ") indicated in any section.\n\n";
} // This function allows for two parameters and then displays them in the middle of strings.

void knockoffTicketmaster(int ticketQuantity, double ticketPrice, string seatingSection)
{
	cout << "This function will look for " << ticketQuantity << " tickets with a max price of $"
		 << ticketPrice << " in the section: \"" << seatingSection << "\"\n\n";
} // This accepts three parameters and prints the values out when called.