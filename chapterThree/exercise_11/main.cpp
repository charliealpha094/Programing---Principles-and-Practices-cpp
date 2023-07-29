// Done by Carlos Amaral (2023/07/25)

#include "std_lib_facilities.h"

int main()
{
    // Variable input
    int pennies {0}, nickel {0}, dim {0}, qtrs {0}, hdollar {0}, odollor {0};
    int total {0};

    // User input
    cout << "How many pennies do you have ?\n";
    cin >> pennies;
    total += pennies * 1;

    cout << "How many nickels do you have? \n";
    cin >> nickel;
    total += nickel * 5;

    cout << "How many dimmes do you have? \n";
    cin >> dim;
    total += dim * 10;

    cout << "How many quarters do you have? \n";
    cin >> qtrs;
    total += qtrs * 25;

    cout << "How many half dollars do you have? \n";
    cin >> hdollar;
    total += hdollar * 50;

    cout << "How many one dollar do you have? \n";
    cin >> odollor;
    total += odollor * 100;

    // Output and logic
    if(pennies > 1 || pennies == 0) {
        cout << "You have " << pennies << " pennies." << endl;
    } else {
        cout << "You have " << pennies << " pennie." << endl;
    }

    if(nickel > 1 || nickel == 0) {
        cout << "You have " << nickel << " nickels." << endl;
    } else {
        cout << "You have " << nickel << " nickel." << endl;
    }

    if(dim > 1 || dim == 0) {
        cout << "You have " << dim << " dimmes." << endl;
    } else {
        cout << "You have " << dim << "dime." << endl;
    }

    if(qtrs > 1 || qtrs == 0) {
        cout << "You have " << qtrs << " quarters." << endl;
    } else {
        cout << "You have " << qtrs << " quarter." << endl;
    }

    if(hdollar > 1 || hdollar == 0) {
        cout << "You have " << hdollar << " half dollars." << endl;
    } else {
        cout << "You have " << hdollar << " half dollar." << endl;
    }

    if(odollor > 1 || hdollar == 0) {
        cout << "You have " << odollor << " one dollar coins." << endl;
    } else {
        cout << "You have " << odollor << " one dollar coin." << endl;
    }

    cout << "The value of all your coins is " << total/100 << " dollars (" << total << " cents).";
}
