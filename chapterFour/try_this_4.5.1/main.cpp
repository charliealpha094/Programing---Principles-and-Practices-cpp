// Done by Carlos Amaral (2023/08/04)

#include "std_lib_facilities.h"

// Function declaration
int square(int x) {

    // Variable declaration
    int result = 0;

    // Loop
    for(int i = 0; i < x; i++) {
        result += x;
    }
    return result;
}

int main()
{
    cout << square(2) << '\n';
    cout << square(10) << '\n';
}
