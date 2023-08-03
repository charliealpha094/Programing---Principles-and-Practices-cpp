// Done by Carlos Amaral (2023/08/03)

/*
Rewrite the character value example from the previous Try this to use a for-statement. Then modify your program
to also write out a table of the integer values for uppercase letters and digits.
*/

#include "std_lib_facilities.h"

int main()
{
    // Loop (includes everything)
    for(char i = 'a'; i <= 'z'; i++) {
        cout << i << '\t' << int(i) << '\n';
    }
cout << "\n";

    // Loop (Uppercase letters)
    for(char i = 'A'; i <= 'Z'; i++) {
        cout << i << '\t' << int(i) << '\n';
    }
cout << "\n";

    // Loop (digits)
    for(int i = 0; i <= 10; i++) {
        cout << i << '\t' << int(i) << '\n';
    }
}
