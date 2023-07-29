// Done by Carlos Amaral (2023/07/17)

/* Modify the program above to ask the user to enter floating-point values and store them in double variables. Compare the
outputs of the two programs for some inputs of your choice. Are the results the same? Should they be? What’s the
difference? */

#include "std_lib_facilities.h"

int main()
{
    // Variable declaration
    double val1 {0}, val2 {0};
    double difference {0}, sum {0}, product {0}, ratius {0};
    double smaller = val1;
    double larger = val2;

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

    // Output and validation
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
        cout << "Ooops! The numbers are equal";
    }
}
