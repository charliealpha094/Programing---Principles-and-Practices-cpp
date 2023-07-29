// Done by Carlos Amaral (2023/07/09)

#include "std_lib_facilities.h"

int main()
{
    // Variable declaration
    double n;

    // User input
    cout << "Please, enter a floating-point value: ";
    cin >> n;

    // Output and calculations
    cout << "n == " << n;
    cout << "\nn+1 == " << n + 1;
    cout << "\nthreetimes n == " << 3 * n;
    cout << "\ntwice n == " << n + n;
    cout << "\nn squared == " << n * n;
    cout << "\nhalf of n == " << n / 2;
    cout << "\nsquare root of n == " << sqrt(n);
    cout << '\n';
}
