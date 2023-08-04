// Done by Carlos Amaral (2023/08/04)

#include "std_lib_facilities.h"

int main()
{
    // Vector declaration
    vector<int> v = {5, 7, 9, 4, 6, 8};

    // Loop to print the content of the vector
    for(int i = 0; i < v.size(); i++) {
        cout << v[i] << '\n';
    }

    cout << "\n";

    // Now with a "range for loop"
    for(int x : v) {      // for each int x in (vector) v
        cout << x << '\n';
    }
}
