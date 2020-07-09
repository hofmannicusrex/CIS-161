#include "Student.h"

Student::Student() :Person()
{
}

Student::Student(string fName, string lName, string honorific, string studentType) :Person(fName, lName, honorific)
{
	type = studentType;
}

Student::~Student()
{
}

string Student::print()
{
	return Person::print() + ", " + type;
}