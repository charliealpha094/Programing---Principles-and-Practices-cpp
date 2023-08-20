// Done by Carlos Amaral (2023/08/16)

#include "std_lib_facilities.h"

int main()
{
    // Variable declaration
    double num = 0;
    auto smallest = numeric_limits<decltype(num)>::max();
    auto largest = numeric_limits<decltype(num)>::min();

    // User input and loop through the inputted numbers
    cout << "Please, introduce some numbers: ( | to exit)" << endl;

    while(cin >> num) {
        cout << num << endl;
        if(num <= smallest) {
            smallest = num;
            cout << "The smallest so far is: " << smallest << endl;
        } else if(num >= largest) {
            largest = num;
            cout << "The largest so far is: " << largest << endl;
        }
    }
    cout << "You're leaving the program! Bye!!" << endl;
}
