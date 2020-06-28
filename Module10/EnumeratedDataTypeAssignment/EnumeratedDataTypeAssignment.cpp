/*  EnumeratedDataTypeAssignment.cpp || Nick Hofmann 6/28/2020
    nickhofmann1989@hotmail.com | nohofmann@dmacc.edu

    This program will ask the user to choose what filing status they want to file their
    income taxes using. It will then print out a summary of some information based on
    the appropriate tax rate.

*/
#include <iostream>
using namespace std;

enum TaxFilingStatus
{
    SINGLE,
    MARRIED_FILING_JOINTLY,
    MARRIED_FILING_SEPARATELY,
    HEAD_OF_HOUSEHOLD,
    QUALIFYING_WIDOW_ER_WITH_DEPENDENT_CHILD
};

// GLOBAL CONSTANTS
const double SINGLE_TAX_RATE = .35;
const double MARRIED_FILING_JOINTLY_TAX_RATE = .20;
const double MARRIED_FILING_SEPARATELY_TAX_RATE = .33;
const double HEAD_OF_HOUSEHOLD_TAX_RATE = .25;
const double WIDOW_WITH_DEPENDENT_CHILD_TAX_RATE = .15;

// FUNCTION PROTOTYPES
void outputTaxFilingStatus(TaxFilingStatus);

int main()
{
    // VARIABLE DECLARATIONS
    const int NUMBER_OF_FILING_OPTIONS = 5;
    TaxFilingStatus fileStatus;  // Loop counter
    int userFilingChoice = 0;
    double userIncome = 0;
    double incomeTaxOwed = 0;

    // This for loop uses the enum TaxFilingStatus object(?) to control the loop iterations.
    for (fileStatus = SINGLE; fileStatus <= QUALIFYING_WIDOW_ER_WITH_DEPENDENT_CHILD;
                              fileStatus = static_cast<TaxFilingStatus>(fileStatus + 1))
    {
        cout << "Filing Status Option " << (fileStatus + 1) << ":\n\t";
        outputTaxFilingStatus(fileStatus);
        cout << "\n\n";
    }

    // Get the input from the user.
    cout << "Which filing status option will you be using? (1, 2, 3, 4, or 5): ";
    cin >> userFilingChoice;

    while (userFilingChoice < (SINGLE + 1) || userFilingChoice > (QUALIFYING_WIDOW_ER_WITH_DEPENDENT_CHILD + 1))
    {
        if (userFilingChoice < (SINGLE + 1) || userFilingChoice > (QUALIFYING_WIDOW_ER_WITH_DEPENDENT_CHILD + 1) || cin.fail())
        {
            cin.clear();
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

            cout << "\nThat is not one of the five options, please try again.\n";
            cout << "\nWhich filing status option will you be using? (1, 2, 3, 4, or 5): ";
            cin >> userFilingChoice;
        }
    }  // End of input validation while loop.

    cout << "\nEnter your income: ";
    cin >> userIncome;

    while (userIncome < 0 || cin.fail())
    {
        cin.clear();
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

        cout << "\nWhat you entered is not valid for your income.\n";
        cout << "\nEnter your income: ";
        cin >> userIncome;
    }  // End of input validation while loop.
    
    // Outputting summary info.
    cout << "\n\n\tSummary\n=======================";

    if (userFilingChoice == SINGLE + 1)
    {
        cout << "\nSingle.";
        incomeTaxOwed = userIncome * SINGLE_TAX_RATE;

        cout << "\nYour Income: " << userIncome;
        cout << "\nIncome Tax Owed: " << incomeTaxOwed;
        cout << "\n\n";
    }
    else if (userFilingChoice == MARRIED_FILING_JOINTLY + 1)
    {
        cout << "\nMarried Filing Jointly";
        incomeTaxOwed = userIncome * MARRIED_FILING_JOINTLY_TAX_RATE;

        cout << "\nYour Income: " << userIncome;
        cout << "\nIncome Tax Owed: " << incomeTaxOwed;
        cout << "\n\n";
    }
    else if (userFilingChoice == MARRIED_FILING_SEPARATELY + 1)
    {
        cout << "\nMarried Filing Separately";
        incomeTaxOwed = userIncome * MARRIED_FILING_SEPARATELY_TAX_RATE;

        cout << "\nYour Income: " << userIncome;
        cout << "\nIncome Tax Owed: " << incomeTaxOwed;
        cout << "\n\n";
    }
    else if (userFilingChoice == HEAD_OF_HOUSEHOLD + 1)
    {
        cout << "\nHead of Household";
        incomeTaxOwed = userIncome * HEAD_OF_HOUSEHOLD_TAX_RATE;

        cout << "\nYour Income: " << userIncome;
        cout << "\nIncome Tax Owed: " << incomeTaxOwed;
        cout << "\n\n";
    }
    else if (userFilingChoice == QUALIFYING_WIDOW_ER_WITH_DEPENDENT_CHILD + 1)
    {
        cout << "\nQualifying Widow(er) with Dependent Child";
        incomeTaxOwed = userIncome * WIDOW_WITH_DEPENDENT_CHILD_TAX_RATE;

        cout << "\nYour Income: " << userIncome;
        cout << "\nIncome Tax Owed: " << incomeTaxOwed;
        cout << "\n\n";
    }

    return 0;
}  // End of main method.

void outputTaxFilingStatus(TaxFilingStatus filingStatus)
{
    /* This function uses a switch statement to equate the numeric value of the enum object(?) to
    strings that represent the contents of TaxFilingStatus.*/
    switch (filingStatus)
    {
    case SINGLE:
        cout << "Single";
        cout << "\n\t\t" << (SINGLE_TAX_RATE * 100) << "% Income Tax Rate";
        break;
    case MARRIED_FILING_JOINTLY:
        cout << "Married Filing Jointly";
        cout << "\n\t\t" << (MARRIED_FILING_JOINTLY_TAX_RATE * 100) << "% Income Tax Rate";
        break;
    case MARRIED_FILING_SEPARATELY:
        cout << "Married Filing Separately";
        cout << "\n\t\t" << (MARRIED_FILING_SEPARATELY_TAX_RATE * 100) << "% Income Tax Rate";
        break;
    case HEAD_OF_HOUSEHOLD:
        cout << "Head of Household";
        cout << "\n\t\t" << (HEAD_OF_HOUSEHOLD_TAX_RATE * 100) << "% Income Tax Rate";
        break;
    case QUALIFYING_WIDOW_ER_WITH_DEPENDENT_CHILD:
        cout << "Qualifying Widow(er) with Dependent Child";
        cout << "\n\t\t" << (WIDOW_WITH_DEPENDENT_CHILD_TAX_RATE * 100) << "% Income Tax Rate";
        break;
    }
}  // End of the outputTaxFilingStatus() function.