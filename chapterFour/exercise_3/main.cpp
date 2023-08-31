// Done by Carlos Amaral (2023/08/31)

#include "std_lib_facilities.h"

/* Read a sequence of double values into a vector. Think of each value as the distance between two cities along a given
route. Compute and print the total distance (the sum of all distances). Find and print the smallest and greatest distance
between two neighboring cities. Find and print the mean distance between two neighboring cities.*/


int main()
{
    // Variable declaration
    vector<double> distances;
    double distance = 0;
    double smallest = 0;
    double greatest = 0;
    double mean = 0;
    double total_distance = 0;

    // User input, placement into the vector and loop through it
    cout << "Please, introduce some distances: " << endl;
    while(cin >> distance) {
        distances.push_back(distance);

        if(distances.size() == 0) {
            error("Sorry, no distances entered");
        } else if(smallest == 0 && greatest == 0) {
            smallest = distance;
            greatest = distance;
        } else if(smallest > distance) {
            smallest = distance;
        } else if(greatest < distance) {
            greatest = distance;
        }
        total_distance += distance;
    }

    // Mean calculation
    mean = total_distance / distances.size();

    cout << "The largest distance is: " << greatest << endl;
    cout << "The smallest distance is: " << smallest << endl;
    cout << "The total distance is = " << total_distance << endl;
    cout << "The mean distance is = " << mean << endl;
}
