/*  PrototypeAndInLineAssignment.cpp || Nick Hofmann 6/24/2020
	nickhofmann1989@hotmail.com | nohofmann@dmacc.edu

	This program will .
*/

// Setup for NameSpace assignment

#include <iostream>
using namespace std;

int main()
{

	int x = 99; // Variable
	int y = 100;
	int *xPtr = &x; // Pointer Variable

	printf("The value of xPtr: %p", xPtr);
	cout << endl;

	printf("The value of x: %d", x);
	cout << endl;

	printf("The value of &x: %p", &x);
	cout << endl;

	printf("The value of &y: %p", &y);
	cout << endl;

}