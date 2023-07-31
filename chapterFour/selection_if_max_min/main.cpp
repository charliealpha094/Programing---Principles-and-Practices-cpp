// Done by Carlos Amaral (2023/07/31)

// An upgrade of the example 4.4.1.1 seen in the book

#include "std_lib_facilities.h"

int main()
{
    // Variable declaration
    int a = 0;
    int b = 0;

    // User input
    cout << "Please, enter two integers \n";
    cin >> a >> b;

    // Logic and output
    if(a > b) {
        cout << "Max number is " << a << endl;
        cout << "Min number is " << b << endl;
    } else {
        cout << "Max number is " << b << endl;
        cout << "Min number is " << a << endl;
    }
}
