// Done by Carlos Amaral (2023/09/02)

/* Make a vector holding the ten string values "zero", "one", . . . "nine". Use that in a program that converts a digit to
its corresponding spelled-out value; e.g., the input 7 gives the output seven. Have the same program, using the same
input loop, convert spelled-out numbers into their digit form; e.g., the input seven gives the output 7. */

#include "std_lib_facilities.h"

int main()
{
    // Variable declaration
    vector<string> digit_to_str = {"zero", "one", "two", "three", "four", "five",
                                    "six", "seven", "eight", "nine"};
    int num {0}; // Input variable
    char end {' '};
    string spell_result {" "}; // Output variable

    while(end != 'y') {
        // 1st part - Convert digit numbers into spelled out ones
        // User input
        cout << "Please, enter a number between 0 and 9" << endl;
        cin >> num;
        // Result
        cout << "The number " << num << " gives the output " << digit_to_str[num] << endl;

        // 2nd part - Convert spelled out numbers in digit ones
        cout << "\nPlease, spell a number between zero and nine" << endl;
        cin >> spell_result;
        for(int i = 0; i < digit_to_str.size(); i++) {
            if(digit_to_str[i] == spell_result) {
                cout << i << endl;
            }
        }

        cout << "Quit the program? (y|n)" << endl;
        cin >> end;
    }
    return 0;
}
