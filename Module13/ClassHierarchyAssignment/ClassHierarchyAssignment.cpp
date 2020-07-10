/*  ClassHierarchyAssignment.cpp || Nick Hofmann 7/8/2020
    nickhofmann1989@hotmail.com | nohofmann@dmacc.edu

    This program will .

*/
#include <iostream>
using namespace std;

class Ship
{
private:
    string shipName;
    string yearShipWasBuilt;
public:
    // DEFAULT CONSTRUCTOR
    Ship()
    {
        shipName = "Default Ship Name";
        yearShipWasBuilt = " ";
    }
    // CONSTRUCTOR
    Ship(string sName, string yearBuilt)
    {
        shipName = sName;
        yearShipWasBuilt = yearBuilt;
    }
    // DESTRUCTOR
    ~Ship()
    {
    }
    // MUTATORS
    void setShipName(string sName)
    {
        shipName = sName;
    }
    void setYearShipWasBuilt(string yearBuilt)
    {
        yearShipWasBuilt = yearBuilt;
    }
    // ACCESSORS
    string getShipName() const
    {
        return shipName;
    }
    string getYearShipWasBuilt() const
    {
        return yearShipWasBuilt;
    }

    virtual void Print() const
    {
        cout << "Ship Name: " << shipName << "\nYear Ship was Built: " << yearShipWasBuilt;
    }
};

class CruiseShip : public Ship
{
private:
    int maxPassengerNumber;
public:
    // DEFAULT CONSTRUCTOR
    CruiseShip() : Ship()
    {
        maxPassengerNumber = 0;
    }
    // CONSTRUCTOR
    CruiseShip(int maxPassengers) : Ship()
    {
        setShipName("Carnival One");
        maxPassengerNumber = maxPassengers;
    }
    // DESTRUCTOR
    ~CruiseShip()
    {
    }
    // MUTATORS
    void setMaxPassengerNumber(int maxPassengers)
    {
        maxPassengerNumber = maxPassengers;
    }
    // ACCESSORS
    int getMaxPassengerNumber()
    {
        return maxPassengerNumber;
    }

    virtual void Print() const override
    {
        cout << "Ship Name: " << getShipName() << "\nMaximum Passenger Number: " << maxPassengerNumber;
    }
};

class CargoShip : public Ship
{
private:
    int tonnage;
public:
    // DEFAULT CONSTRUCTOR
    CargoShip() : Ship()
    {
        tonnage = 0;
    }
    // CONSTRUCTOR
    CargoShip(int shipTonnage) : Ship()
    {
        setShipName("Exxon Valdez");
        tonnage = shipTonnage;
    }
    // DESTRUCTOR
    ~CargoShip()
    {
    }
    // MUTATORS
    void setTonnage(int shipTonnage)
    {
        tonnage = shipTonnage;
    }
    // ACCESSORS
    int getTonnage()
    {
        return tonnage;
    }

    virtual void Print() const override
    {
        cout << "Ship Name: " << getShipName() << "\nShip's Cargo Capacity: " << tonnage;
    }
};

void usePrintFunctions(const Ship* shipObject)
{
    shipObject->Print();
}

int main()
{
    // VARIABLE DECLARATIONS
    const int NUMBER_OF_OBJECTS = 3;

    Ship* boats[NUMBER_OF_OBJECTS] =
    {
        new Ship("Titanic", "1912"),
        new CruiseShip(2650),
        new CargoShip(1002352) // This works but figure out how to use/make a CargoShip constructor that uses a real shipName.
                               // new CargoShip("Exxon Valdez", 1000000) ^^^^
    };

    for (int counter = 0; counter < NUMBER_OF_OBJECTS; counter++)
    {
        usePrintFunctions(boats[counter]);
        cout << "\n\n";
        //(boats[counter]);
    }

    return 0;
}  // End of main method.