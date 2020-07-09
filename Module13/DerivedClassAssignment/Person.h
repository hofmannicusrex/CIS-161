#pragma once
#include <string>
using namespace std;

class Person
{
private:
	string firstName;
	string lastName;
	string honorific;
public:
	Person();  // Constructor
	Person(string, string, string);  // Constructor
	~Person();  // Destructor
	// MUTATORS
	void setFirstName(string fName)
	{
		firstName = fName;
	}
	void setLastName(string lName)
	{
		lastName = lName;
	}
	void setHonorific(string honorif)
	{
		honorific = honorif;
	}
	// ACCESSORS
	string getFirstName() const
	{
		return firstName;
	}
	string getLastName() const
	{
		return lastName;
	}
	string getHonorific() const
	{
		return honorific;
	}

	string print();
};

// Function to display the student's ID, name, and GPA.