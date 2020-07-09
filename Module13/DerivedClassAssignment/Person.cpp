#include "Person.h"

Person::Person()
{
}

Person::Person(string fName, string lName, string honorif)
{
	firstName = fName;
	lastName = lName;
	honorific = honorif;
}

Person::~Person()
{
}

string Person::print()
{
	return honorific + " " + firstName + " " + lastName;
}