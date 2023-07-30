// Done by Carlos Amaral (2023/07/31)

// My own example with a constant expression (constexpr)

#include "std_lib_facilities.h"


int main()
{
    // Variable declaration
    constexpr double pi = 3.14159;
    double perimeter {0}, r {0};

    // User input
    cout << "Please, input a circle radius (press enter to leave) \n";
    cin >> r;

    // Calculations
    perimeter = 2 * pi * r;

    // Output
    cout << "The perimeter of the circle is: " << perimeter;
}
