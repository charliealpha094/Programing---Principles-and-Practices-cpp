// Done by Carlos Amaral (2023/08/02)

/* The character 'b' is char('a'+1), 'c' is char('a'+2), etc. Use a loop to write out a table of characters with their
corresponding integer values:
a 97
b 98
...
z 122
*/

#include "std_lib_facilities.h"

int main()
{
    // Variable declaration
    char a = 'a';

    // Loop and output
    while(a <= 'z') {
        cout << a << '\t' << int(a) << '\n';
        ++a;
    }
}
