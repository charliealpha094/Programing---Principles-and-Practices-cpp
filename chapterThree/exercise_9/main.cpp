// Done by Carlos Amaral (2023/07/20)

#include "std_lib_facilities.h"


int main()
{
    // Variable declaration
    int digi_num;

    // User input
    cout << "Please, input a number (digit) \n";
    cin >> digi_num;

    // Output and logic
    if(digi_num == 0) {
        cout << "Zero \n";
    } else if(digi_num == 1) {
        cout << "One \n";
    } else if(digi_num == 2) {
        cout << "Two \n";
    } else if(digi_num == 3) {
        cout << "Three \n";
    } else if(digi_num == 4) {
        cout << "Four \n";
    } else {
        cout << "Not a number I know| \n";
    }
}
