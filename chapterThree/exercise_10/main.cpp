// Done by Carlos Amaral (2023/07/23)

#include "std_lib_facilities.h"

int main()
{
    // Variable declaration
    string operation = " ";
    double num1 {0}, num2 {0};
    double sum {0}, sub {0}, prod {0}, div {0};

    // User input
    cout << "Please, write an operand followed by two numbers: (followed by enter)\n";
    cin >> operation >> num1 >> num2;

    // Output and logic
    if(operation == "+") {
        cout << "You choose the operation sum \n";
        sum = num1 + num2;
        cout << "Sum = " << sum << endl;
    } else if(operation == "-") {
        cout << "You choose the operation subtraction \n";
        sub = num1 - num2;
        cout << "Result = " << sub << endl;
    } else if(operation == "*") {
        cout << "You choose  the operation product \n";
        prod = num1 * num2;
        cout << "Product = " << prod << endl;
    } else if(operation == "/") {
        cout << "You choose the operation division \n";
        div = num1 / num2;
        cout << "Division = " << div << endl;
    } else {
        cout << "Sorry, not an operand that I can recognize!";
    }
}
