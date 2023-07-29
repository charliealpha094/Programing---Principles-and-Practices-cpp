// Done by Carlos Amaral (2023/07/09)

#include "std_lib_facilities.h"


int main()
{
    // Variable declaration
    string first_name;
    double age, age_in_months;

    // User input
    cout << "Please, enter your first name and age (followed by 'enter'): \n";
    cin >> first_name;
    cin >> age;

    // Calculations
    age_in_months = age * 12;

    // Output
    cout << "Hey " << first_name << "! " << "Your age in months is: " << age_in_months;
}
