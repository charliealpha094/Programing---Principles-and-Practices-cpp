// Done by Carlos Amaral (2023/07/31)

// A bit more complete version of the example given in the book

#include "std_lib_facilities.h"

int main()
{
    // Variable declaration
    double dc {0}, df {0};

    // User input
    cout << "Please, introduce the temperature in Celsius: \n";
    cin >> dc;

    // Calculations
    df = 9/5 * dc + 32;

    // Output
    cout << dc << " degree celsius are equivalent to " << df << " degree fahreneit!" << endl;
}
