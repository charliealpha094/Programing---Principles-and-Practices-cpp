// Done by Carlos Amaral (2023/09/01)

/* Write a program that performs as a very simple calculator. Your calculator should be able to handle the four basic math
operations — add, subtract, multiply, and divide — on two input values. Your program should prompt the user to enter
three arguments: two double values and a character to represent an operation. If the entry arguments are 35.6, 24.1, and
'+', the program output should be The sum of 35.6 and 24.1 is 59.7. In Chapter 6 we look at a much more
sophisticated simple calculator. */

#include "std_lib_facilities.h"

int main()
{
    // Variable declaration
    double num1 = 0;
    double num2 = 0;
    double result = 0;
    char operation = ' ';


    // User input
    cout << "Please, input two values and and an operator (+, *, -, /)" << endl;

    // Loop through the input
    while(cin >> num1 >> num2 >> operation) {

        switch(operation) {
            case '+':
                cout << "The sum of " << num1 << " and " << num2 << " is " << num1 + num2 << endl;
                break;
            case '-':
                cout << "The difference between " << num1 << " and " << num2 << " is " <<
                        num1 - num2 << endl;
                break;
            case '*':
                cout << "The product between " << num1 << " and " << num2 << " is " <<
                        num1 * num2 << endl;
                break;
            case '/':
                cout << "The quotient between " << num1 << " and " << num2 << " is " <<
                        num1 / num2 << endl;
                break;
            default:
                cout << "Sorry, the inserted operator is not supported!" << endl;
        }
    }
    return 0;
}
