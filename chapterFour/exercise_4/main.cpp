// Done by Carlos Amaral (2023/09/01)

/* Write a program to play a numbers guessing game. The user thinks of a number between 1 and 100 and your program
asks questions to figure out what the number is (e.g., “Is the number you are thinking of less than 50?”). Your program
should be able to identify the number after asking no more than seven questions. Hint: Use the < and <= operators and the
if-else construct. */

#include "std_lib_facilities.h"

int main()
{
    // Variable declaration
    int questions {0};
    char answer {' '};
    vector<int> points{25, 13, 6, 3, 2, 1};
    int guess {50};

    // User input
    cout << "Think of a number between 1 and 100... You have 7 attempts (ctrl+c to leave)" << endl;
    cout << "Is the number you're thinking of, 50?" << endl;
    cout << "Type c for correct, h for higher, l for lower " << endl;

    // Loop through the answers
    while(cin >> answer) {

        questions++;

        switch(answer) {
            case 'c':
                cout << "Wow! I guessed the number! It took me " << questions << " questions to answer" << endl;
                break;
                return 0;
            case 'h':
                guess += points[questions - 1];
                break;
            case 'l':
                guess -= points[questions -1];
                break;
            default:
                cout << "Sorry, could not guess it..." << endl;
                break;
        }
        cout << "Is the number " << guess << " ?" << endl;
    }
    return 0;
}
