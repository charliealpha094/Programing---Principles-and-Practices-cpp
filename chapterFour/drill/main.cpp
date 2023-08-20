// Done by Carlos Amaral (2023/08/20)

#include "std_lib_facilities.h"

int main()
{

    // Variable declaration
    double num1 = 0;
    double num2 = 0;
    char stopChar = ' ';

    // User input
    cout << "Please, input two numbers '|' to exit the program \n";

    while(cin >> num1 >> num2 && stopChar != '|') {
        cout << num1 << "\n";
        cout << num2 << "\n";

        // 2. (smaller and larger value)
        if(num1 < num2) {
            cout << "The smaller value is: " << num1 << "\n";
            cout << "The larger value is: " << num2 << "\n";
        } else if(num1 > num2) {
            cout << "The smaller value is: " << num2 << "\n";
            cout << "The larger value is: " << num1 << "\n";
            // 3. (Check if numbers are equal)
        } else if(num1 == num2) {
            cout << "The numbers are equal! \n";
        } else if(num1 - num2 < 0.01) {
            cout << "The numbers are almost equal! \n";
        }

    }
}
