// Done by Carlos Amaral (2023/08/05)

/*
Often, we start a vector empty and grow it to its desired size as we read or compute the data we want in it. The key operation
here is push_back(), which adds a new element to a vector.
*/

#include "std_lib_facilities.h"

int main()
{
    // Declare and initialize the vector
    vector<double> v; // starts as an empty vector

    // Add an element with the value of 2.7
    v.push_back(2.7);

    // Add an element with the value of 5.6
    v.push_back(5.6);

    // Add an element with the value of 7.9
    v.push_back(7.9);

    // Check the size of the vector
    cout << v.size() << "\n";


    // Output the elements of the vector
    for(int i = 0; v.size(); i++) {
        cout << v[i] << '\n';
    }
}
