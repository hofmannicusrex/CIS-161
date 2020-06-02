/*  DataTypeSizeHofmann || Nick Hofmann 6/1/2020 nickhofmann1989@hotmail.com | nohofmann@dmacc.edu

    This program will display the number of bytes used by four different data types:
        int, char, float, and double

*/

#include <iostream>
using namespace std;

int main()
{

    cout << "The 'int' data type uses " << sizeof(int) << " bytes.\n\n";

    cout << "The 'char' data type uses " << sizeof(char) << " bytes.\n\n";

    cout << "The 'float' data type uses " << sizeof(float) << " bytes.\n\n";

    cout << "The 'double' data type uses " << sizeof(double) << " bytes.\n\n";

    system("Pause");
    return 0;

}// End of main method