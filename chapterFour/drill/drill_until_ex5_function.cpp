// Done by Carlos Amaral (2023/08/15)

#include "std_lib_facilities.h"

// Functions
double smaller(double num1, double num2) {
    if(num1 < num2) {
        return num1;
    } else {
        return num2;
    }
}

double larger(double num1, double num2) {
    if(num1 < num2) {
        return num2;
    } else {
        return num1;
    }
}

bool almost_equal(double num1, double num2) {
    if(abs(num1 - num2) < 0.01) {
        return true;
    } else {
        return false;
    }
}

int main() {
    // Variable declaration
    double num1 = 0;
    double num2 = 0;
    double stop_char = 0;

    // User input and loop
    cout << "Please, input two numbers ('|' to exit) \n";

    while(cin >> num1 >> num2 && stop_char != '|') {
        if(num1 == num2) {
            cout << "The numbers are equal! \n";
        } else {
            cout << "The smaller value is: " << smaller(num1, num2) << '\n';
            cout << "The larger value is: " << larger(num1, num2) << '\n';
            if(almost_equal(num1, num2)) {
                cout << "The numbers are almost the same! \n";
            }
        }
    }
}
