// Done by Carlos Amaral (2023/07/10)

#include "std_lib_facilities.h"

int main()
{
    // Variable declaration
    string first;
    string second;
    string name;

    // User input
    cout << "Please, enter your first and second names\n";
    cin >> first >> second;

    // Concatenation
    name = first + ' ' + second;

    // Output
    cout << "Hello, " << name << '\n';
}
