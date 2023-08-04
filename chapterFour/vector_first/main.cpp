// Done by Carlos Amaral (2023/08/04)

#include "std_lib_facilities.h"

int main()
{
    // Vector declaration (int vector)
    vector<int> v = {5, 7, 9, 4, 6, 8};

    // String vector
    vector<string> philosopher = {"Kant", "Plato", "Hume", "Kierkegaard"};

    // Print vector content
    cout << v[1] << '\n';
    cout << philosopher[2] << '\n';

    // Getting the size of vector v
    cout << v.size() << '\n';

    // Printing the elements of vector v (for loop)
    for(int i = 0; i < v.size(); i++) {
        cout << v[i] << '\n';
    }

}
