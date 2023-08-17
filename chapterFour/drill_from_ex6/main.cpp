// Done by Carlos Amaral (2023/08/16)

#include "std_lib_facilities.h"


int main()
{
    // Variable declaration
    double smallest = 0;
    double largest = 0;
    double num = 0;
    double stop_char = 0;

    // User input and loop through it
    cout << "Please, introduce a number ('|' to exit) \n";
    while(cin >> num && stop_char != '|') {
        cout << num << "\n";
        if(num < smallest) {
            smallest = num;
            cout << "The smallest so far is: " << smallest << "\n";
        } else if(num > largest) {
            largest = num;
            cout << "The largest so far is: " << largest << "\n";
        }
    }
    cout << "You're leaving the program!";
}
