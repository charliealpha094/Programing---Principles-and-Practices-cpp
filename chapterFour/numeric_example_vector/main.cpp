// Done by Carlos Amaral (2023/08/05)

// Read an amount of temperatures and calculate the median and average

#include "std_lib_facilities.h"

int main()
{
    // Variable (and vector) declaration
    vector<double> temps;
    double sum = 0;

    // User input and place it into vector
    cout << "Please, introduce some temperatures \n";
    for(double temp; cin >> temp;) {
        temps.push_back(temp); // Place it into the vector
    }

    // Compute the mean (average) temperature
    for(int x : temps) {
        sum += x;
    }
    cout << "Average temperature: " << sum/temps.size() << '\n';

    // Compute the median temperature
    sort(temps);
    cout << "Median temperature: " << temps[temps.size()/2] << '\n';
}
