// Done by Carlos Amaral (2023/07/18)

#include "std_lib_facilities.h"

int main()
{
    // Variable declaration
    int num;

    // User input
    cout << "Please, input a number: (followed by enter) \n";
    cin >> num;

    // Output and logic
    if(num % 2 == 0) {
        cout << "The value " << num << " is even.";
    } else {
        cout << "The value " << num << " is odd.";
    }
}
