// Done by Carlos Amaral (2023/08/31)

/* If we define the median of a sequence as “a number so that exactly as many elements come before it in the sequence as
come after it,” fix the program in §4.6.3 so that it always prints out a median. Hint: A median need not be an element ofthe sequence.
*/

#include "std_lib_facilities.h"

int main()
{
    // Variable (and vector) declaration
    vector <double> temps;
    double sum = 0;
    double median = 0;

    // User input and place it into a vector
    cout << "Please, introduce some temperatures: " << endl;
    for(double temp; cin >> temp;) {
        temps.push_back(temp);
    }

    // Compute the mean (average) temperature
    for(int x : temps) {
        sum += x;
    }
    cout << "Average temperature: " << sum / temps.size() << endl;

    // Median calculations
    sort(temps);
    int above_mid = temps.size() / 2;

    if(temps.size() % 2 == 0) {
        median = (temps[above_mid] + temps[above_mid - 1]);
    } else {
        median = temps[above_mid];
    }

    cout << "Median temperature =  " << median << endl;
}
