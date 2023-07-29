// Done by Carlos Amaral (2023/07/17)

/* Write a program that prompts the user to enter three integer values, and then outputs the values in numerical sequence
separated by commas. So, if the user enters the values 10 4 6, the output should be 4, 6, 10. If two values are the same,
they should just be ordered together. So, the input 4 5 4 should give 4, 4, 5. */

#include "std_lib_facilities.h"


int main()
{
    // Variable declaration
    int val1 {0}, val2 {0}, val3 {0};
    int min {0}, mid {0}, max {0};

    // User input
    cout << "Please, enter three integer values: (followed by enter) \n";
    cin >> val1 >> val2 >> val3;

    // Output and logic
    if(val1 < val2 && val2 < val3 && val1 < val3) {
        min = val1;
        mid = val2;
        max = val3;
        cout << min << ", " << mid << ", " << max << ".";
    } else if(val1 < val2 && val2 > val3 && val1 < val3) {
        min = val1;
        mid = val3;
        max = val2;
        cout << min << ", " << mid << ", " << max << ".";
    } else if(val1 > val2 && val2 < val3 && val1 > val3) {
        min = val2;
        mid = val3;
        max = val1;
        cout << min << ", " << mid << ", " << max << ".";
    } else if(val1 == val2 && val2 == val3) {
        cout << val1 << ", " << val2 << ", " << val3 << ".";
    } else if(val1 < val2 && val1 == val3) {
        min = val1;
        mid = val1;
        max = val2;
        cout << min << ", " << mid << ", " << max << ".";
    } else if(val1 > val2 && val2 == val3) {
        min = val2;
        mid = val3;
        max = val1;
        cout << min << ", " << mid << ", " << max << ".";
    } else if(val1 < val2 && val2 > val3) {
        min = val3;
        mid = val1;
        max = val2;
        cout << min << ", " << mid << ", " << max << ".";
    } else if(val1 == val2 && val3 > val1 && val3 > val2) {
        min = val1;
        mid = val2;
        max = val3;
        cout << min << ", " << mid << ", " << max << ".";
    } else if(val1 == val2 && val3 < val1 && val3 < val2) {
        min = val3;
        mid = val2;
        max = val1;
        cout << min << ", " << mid << ", " << max << ".";
    }



}
