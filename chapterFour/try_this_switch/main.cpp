// Done by Carlos Amaral (2023/08/02)

/* Rewrite your currency converter program from the previous Try this to use a switch-statement. Add conversions
from yuan and kroner. Which version of the program is easier to write, understand, and modify? Why? */

#include "std_lib_facilities.h"

int main()
{
    // Variable (and constant) declaration
    constexpr double usd_to_yene = 0.0070;
    constexpr double usd_to_eur = 1.10;
    constexpr double usd_to_gbp = 1.28;
    constexpr double usd_to_yuan = 0.14;
    constexpr double usd_to_kroner = 0.098;

    double money = 1;

    char currency = ' ';

    // User input
    cout << "Please, enter the amount of money to convert followed by a currency (y, e, g, yu, k): \n";
    cin >> money >> currency;

    // Logic and output
    switch(currency) {
        case 'y':
            cout << "You choose to convert Yenes to US Dollars! \n";
            cout << money << " yennes = " << usd_to_yene * money << " USD \n";
            break;
        case 'e':
            cout << "You choose to convert Euros to US Dollars! \n";
            cout << money << " euros = " << usd_to_eur * money << " USD \n";
            break;
        case 'g':
            cout << "You choose to convert Pound Sterlings to US Dollars! \n";
            cout << money << " pounds = " << usd_to_gbp * money << " USD \n";
            break;
        case 'yu':
            cout << "You choose to convert Yuan to US Dollars! \n";
            cout << money << " yuans = " << usd_to_yuan * money << " USD \n";
            break;
        case 'k':
            cout << "You choose to convert Norwegian Kroner to US Dollars! \n";
            cout << money << " kroner = " << usd_to_kroner * money << " USD \n";
            break;
        default:
            cout << "Sorry, not a currency that I can recognize!! \n";
            break;
    }
}
