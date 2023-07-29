// Done by Carlos Amaral (2023/07/10)

#include "std_lib_facilities.h"

int Main()
{
    // Variable declaration
    string first;
    string second;

    // User input
    cout << "Please, enter two names\n";
    cin >> first >> second;

    // Validation and output
    if(first == second)
    {
        cout << "That's the same name twice\n";
    }
    else if(first < second)
    {
        cout << first << " is alphabetically before " << second << '\n';
    }
    else if(first > second)
    {
        cout << first << " is alphabetically after " << second << '\n';
    }
}
