/*  PointerRewriteHofmann.cpp || Nick Hofmann 6/24/2020
	nickhofmann1989@hotmail.com | nohofmann@dmacc.edu

	This program will demonstrate the basics of passing pointers to functions.
*/
#include<iostream>
using namespace std;

int doSomething(int *, int *);

int main()
{

	int x = 9000;
	int y = 8000;
	int *xPointer = nullptr;
	int* yPointer = nullptr;
	xPointer = &x;
	yPointer = &y;

	cout << doSomething(xPointer, yPointer);

	return 0;
} // End of main method.

int doSomething(int *x, int *y)
{

	int temp = *x; // temp = 9000
	*x = *y * 10; //  x = 80000
	*y = temp * 100; // y = 900000
	return *x + *y;

} // End of doSomething function.