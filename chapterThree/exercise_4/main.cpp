// Done by Carlos Amaral (2023/07/16)

/* Write a program that prompts the user to enter two integer values. Store these values in int variables named val1 and
val2. Write your program to determine the smaller, larger, sum, difference, product, and ratio of these values and report
them to the user. */

#include "std_lib_facilities.h"


int main()
{
    // Variable declaration
    int val1 {0}, val2 {0};
    int difference {0}, sum {0}, product {0};
    double ratius {0};
    int smaller = val1;
    int larger = val2;

    // User input
    cout << "Please, introduce a number: \n";
    cin >> val1;
    cout << "Please, introduce another number: \n";
    cin >> val2;

    // Calculations
    sum = val1 + val2;
    difference = val1 - val2;
    product = val1 * val2;
    ratius = val1 / val2;

    // Output and logic
    cout << "Sum = " << sum << endl;
    cout << "Difference = " << difference << endl;
    cout << "Product = " << product << endl;
    cout << "Ratio = " << ratius << endl;

    if(val1 < val2) {
        smaller = val1;
        larger = val2;
        cout << "The smaller number is: " << smaller << endl;
        cout << "The larger number is: " << larger << endl;
    } else if(val1 > val2) {
        smaller = val2;
        larger = val1;
        cout << "The smaller number is: " << smaller << endl;
        cout << "The larger number is: " << larger << endl;
    } else {
        cout << "The numbers are equal";
    }
}
