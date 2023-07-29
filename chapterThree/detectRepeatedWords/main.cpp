// Done by Carlos Amaral (2023/07/10)

#include "std_lib_facilities.h"

int main()
{
    // Variable declaration
    string previous = "";
    string current;

    // User input (loop)
    while(cin >> current) {
        if(previous == current) {
            cout << "Repeated word: " << current << '\n';
        }
        previous = current;
    }
}
