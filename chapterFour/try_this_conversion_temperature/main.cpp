// Done by Carlos Amaral (2023/07/31)

/*
Use the example above as a model for a program that converts yen, euros, and pounds into dollars. If you like
realism, you can find conversion rates on the web.
*/

// Conversion rates as 31/07/2021
// Yene to US Dollar -> 1 Yene = 0.0070 USD
// Euro to US Dollar -> 1 Euro = 1.10 USD
// Pound sterling to US Dollar -> 1 GBP = 1.28 USD

#include "std_lib_facilities.h"

int main()
{
    // Variable (and constant) input
    constexpr double usd_to_yene = 0.0070; // amount of dollars a yene has.
    constexpr double usd_to_eur = 1.10;
    constexpr double usd_to_gbp = 1.28;

    double money = 1;

    char currency = ' ';

    // User input
    cout << "Please, enter the amount of money to convert followed by a currency (y, e, g): \n";
    cin >> money >> currency;

    // Logic and output
    if(currency == 'y') {
        cout << "You choose to convert Yenes to US Dollars! \n";
        cout << money << " yenes == " << usd_to_yene * money << " USD \n";
    } else if(currency == 'e') {
        cout << "You choose to convert Euros to US Dollars! \n";
        cout << money << " euros == " << usd_to_eur * money << " USD \n";
    } else if(currency == 'g') {
        cout << "You choose to convert Pound Sterlings to US Dollars! \n";
        cout << money << " pounds == " << usd_to_gbp * money << " USD \n";
    } else {
        cout << "Sorry, not a currency that I can recognize!! \n";
    }

}
