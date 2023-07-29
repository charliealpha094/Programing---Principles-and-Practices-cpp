// Done by Carlos Amaral (2023/07/12)

#include "std_lib_facilities.h"

using namespace std;

int main()
{
    // Variable declaration
    int number_of_words = 0;
    string previous = "";
    string current;

    // User input (loop, conditions and output)
    while(cin >> current) {
        ++number_of_words;
        if(previous == current) {
            cout << "Word number " << number_of_words << endl;
            cout << "repeated: " << current;
        }
        previous = current;
    }
}
