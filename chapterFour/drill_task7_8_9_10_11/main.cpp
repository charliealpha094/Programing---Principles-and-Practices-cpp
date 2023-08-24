// Done by Carlos Amaral (2023/08/21)

#include "std_lib_facilities.h"

// Function to convert units to meters
double into_meters(double num, string unit) {

    // Conversion formulas (variable declaration)
    constexpr double cm_to_m = 0.01;
    constexpr double in_to_m = 0.0254;
    constexpr double ft_to_m = 0.3048;
    double meters;

    // Logic
    if(unit == "cm") {
        meters = num * cm_to_m;
    } else if(unit == "in") {
        meters = num * in_to_m;
    } else if(unit == "ft") {
        meters = num * ft_to_m;
    } else if(unit == "m") {
        meters = num;
    }
    return meters;
}

// Function to check legal/ilegal units
bool check_legal_unit(string unit) {

    bool legal_unit = false;

    // Vector to hold the legal representations
    vector<string> acceptable_units = {"cm", "in", "ft", "m"};

    // Loop through acceptable units
    for(string uni : acceptable_units) {
        if(uni == unit) {
            legal_unit = true;
        }
    }
    return legal_unit;
}


int main()
{
    // Variable declaration
    double num = 0;
    auto smallest = numeric_limits<decltype(num)>::max();
    auto largest = numeric_limits<decltype(num)>::min();
    string unit;
    double meters;
    double sum_meters = 0;
    double no_of_values = 0;

    vector<double> measurements;

    // User input (and loop through it)
    cout << "Please, introduce some numbers ( | to exit)" << endl;

    while(cin >> num >> unit) {

        if(!check_legal_unit(unit)) {
            cout << "Sorry, unit not recognized!" << endl;
        } else {
            meters = into_meters(num, unit);

            // Logic
            if(meters < smallest) {
                smallest = meters;
                cout << "The smallest so far is: " << smallest << endl;
            } else if(meters > largest) {
                largest = meters;
                cout << "The largest so far is: " << largest << endl;
            }
            sum_meters += meters;
            no_of_values += 1;
            measurements.push_back(meters);
        }
    }

    sort(measurements);

    for(double m : measurements) {
        cout << m << endl;
    }

    cout << "The smallest measurement is: " << smallest << "m" << endl;
    cout << "The largest measurement is: " << largest << "m" << endl;
    cout << "The sum of entered values is: " << sum_meters << "m" << endl;
    cout << "The number of entered values is: " << no_of_values << endl;

    cout << "Leaving the program!" << endl;
}
