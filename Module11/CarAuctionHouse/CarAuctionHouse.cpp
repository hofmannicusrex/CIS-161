/*  CarAuctionHouse.cpp || Nick Hofmann 7/1/2020
    nickhofmann1989@hotmail.com | nohofmann@dmacc.edu

    This program will demonstrate the creation and use of classes in C++. A default
    constructor will be used to assign default values to class objects if no values
    are set using the setter functions. Three objects will be created, one will use
    the default constructor to assign values to the member variables.

*/
#include <iostream>
using namespace std;

class Vehicle
{
private:
    string ID;
    int sold;
    int bluebook;
public:
        Vehicle();
    void setID(string);
    void setSold(int);
    void setBluebook(int);
    string getID() const;
    int getSold() const;
    int getBluebook() const;
    int getProfit() const;
};

// ========DEFAULT CONSTRUCTOR========
Vehicle::Vehicle()
{
    ID = "House";
    sold = 0;
    bluebook = 0;
}

// ========SETTERS========
void Vehicle::setID(string vehicleID)
{
    ID = vehicleID;
}

void Vehicle::setSold(int auctionSalePrice)
{
    sold = auctionSalePrice;
}

void Vehicle::setBluebook(int bluebookValue)
{
    bluebook = bluebookValue;
}

// ========GETTERS========
string Vehicle::getID() const
{
    return ID;
}

int Vehicle::getSold() const
{
    return sold;
}

int Vehicle::getBluebook() const
{
    return bluebook;
}

int Vehicle::getProfit() const
{
    return sold - bluebook;
}

int main()
{
    // Creating Vehicle objects.
    Vehicle hooptieOne, whipTwo, jalopyThree;

    // Outputting the values for the hooptieOne Vehicle object. DEFAULT CONTRUCTOR VALUES.
    cout << "Vehicle ID: " << hooptieOne.getID() << endl;
    cout << "Vehicle Auction Sale Price: " << hooptieOne.getSold() << endl;
    cout << "Vehicle Bluebook Value: " << hooptieOne.getBluebook() << endl;
    cout << "Vehicle Profit: " << hooptieOne.getProfit() << endl << endl;

    // Using setter functions to assign values to the whipTwo object's various members.
    whipTwo.setID("Kit");
    whipTwo.setSold(200000);
    whipTwo.setBluebook(35600);

    // Outputting the values for the whipTwo Vehicle  object.
    cout << "Vehicle ID: " << whipTwo.getID() << endl;
    cout << "Vehicle Auction Sale Price: " << whipTwo.getSold() << endl;
    cout << "Vehicle Bluebook Value: " << whipTwo.getBluebook() << endl;
    cout << "Vehicle Profit: " << whipTwo.getProfit() << endl << endl;

    // Using setter functions to assign values to the jalopyThree object's various members.
    jalopyThree.setID("Batmobile");
    jalopyThree.setSold(452135);
    jalopyThree.setBluebook(500000);

    // Outputting the values for the jalopyThree Vehicle  object.
    cout << "Vehicle ID: " << jalopyThree.getID() << endl;
    cout << "Vehicle Auction Sale Price: " << jalopyThree.getSold() << endl;
    cout << "Vehicle Bluebook Value: " << jalopyThree.getBluebook() << endl;
    cout << "Vehicle Profit: " << jalopyThree.getProfit() << endl << endl;
    
    return 0;
}  // End of main method