// Done by Carlos Amaral (2023/07/13)

#include "std_lib_facilities.h"

/* Write a program in C++ that converts from miles to kilometers. Your program should have a reasonable prompt for the
user to enter a number of miles. Hint: There are 1.609 kilometers to the mile. */

int main()
{
    // Variable declaration
    double mile = 0.0; // Input variable
    double km = 0.0; // Output variable

    // User input
    cout << "How many miles? " << endl;
    cin >> mile;

    // Calculations
    km = mile * 1.609;

    // Output
    cout << "There are "  << km << " km's" << " in " << mile << " miles."<< endl;
}
