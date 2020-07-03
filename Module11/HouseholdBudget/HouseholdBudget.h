/*  HouseholdBudget.h || Nick Hofmann 7/2/2020
	nickhofmann1989@hotmail.com | nohofmann@dmacc.edu

	Header file containing the HouseholdBudget class and it's accessors
	and mutators.
*/
#pragma once
#ifndef HOUSEHOLDBUDGET_H
#define HOUSEHOLDBUDGET_H

#include <iostream>
using namespace std;

class HouseholdBudget
{
private:
	int rent;
	double water;
	int garbage;
public:
	HouseholdBudget();      // Constructor
	~HouseholdBudget();     // Destructor
// Mutator Functions
	void setRentBill(int);
	void setWaterBill(double);
	void setGarbageBill(int);
	// Accessor Functions
	int getRentBill() const;
	double getWaterBill() const;
	int getGarbageBill() const;
	double getTotal() const;
};


///////////////////////
////    DEFAULT    ////
////  CONSTRUCTOR  ////
///////////////////////

HouseholdBudget::HouseholdBudget()  // Constructor
{
	rent = 0;
	water = 0;
	garbage = 0;
}


//////////////////////////
////    DESTRUCTOR    ////
//////////////////////////

HouseholdBudget::~HouseholdBudget()  // Destructor
{
	//cout << "Inside the destructor for the HouseholdBudget class.";
}


////////////////////////
////    MUTATORS    ////
////////////////////////

void HouseholdBudget::setRentBill(int rentBill)
{
	rent = rentBill;
}

void HouseholdBudget::setWaterBill(double waterBill)
{
	water = waterBill;
}

void HouseholdBudget::setGarbageBill(int garbageBill)
{
	garbage = garbageBill;
}


/////////////////////////
////    ACCESSORS    ////
/////////////////////////

int HouseholdBudget::getRentBill() const
{
	return rent;
}

double HouseholdBudget::getWaterBill() const
{
	return water;
}

int HouseholdBudget::getGarbageBill() const
{
	return garbage;
}

double HouseholdBudget::getTotal() const
{
	return rent + water + garbage;
}

#endif