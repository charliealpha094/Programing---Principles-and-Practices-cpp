// Done by Carlos Amaral (2023/07/31)

#include "std_lib_facilities.h"

int main()
{
    // Variable (and constant) declaration
    constexpr double cm_per_inch = 2.54;
    double length = 1;
    char unit = ' ';

    // User input
    cout << "Please, enter a length followed by a unit (c or i): \n";
    cin >> length >> unit;

    // Logic and output
    if(unit == 'i') {
        cout << length << "in == " << cm_per_inch * length << "cm\n";
    } else if(unit == 'c') {
        cout << length << "cm == " << length / cm_per_inch << "in\n";
    } else {
        cout << "Sorry, I don't know a unit called " << unit << "\n";
    }
}
