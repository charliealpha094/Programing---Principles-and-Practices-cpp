// Done by Carlos Amaral (2023/08/02)

#include "std_lib_facilities.h"

// Function declaration
int square(int x) {
    return x * x;
}

int main()
{
    // Variable declaration
    int i = 0; // start from 0

    // Loop and output
    while(i < 100) {
        cout << i << '\t' << square(i) << '\n';
        ++i; // increment, that is i becomes i + 1
    }
}
