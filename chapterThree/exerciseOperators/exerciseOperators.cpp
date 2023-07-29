// Done by Carlos Amaral (2023/07/10)

#include "std_lib_facilities.h"

int main()
{
    // Variable declaration
    int n;
    double n2 = n;

    // User input
    cout << "Please, enter a floating-point value: ";
    cin >> n;

    // Output and calculations
    cout << "n == " << n
         << "\nn+1 == " << n + 1
         << "\nthree times n == " << 3 * n
         << "\ntwice n == " << n + n
         << "\nn squared == " << n * n
         << "\nhalf of n == " << n / 2
         << "\nsquare root of n == " << sqrt(n2)
         << "\nremainder 2 of n == " << n % 2
         << '\n';
}
