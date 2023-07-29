// Done by Carlos Amaral (2023/07/18)

/* Do exercise 6, but with three string values. So, if the user enters the values Steinbeck, Hemingway, Fitzgerald, the
output should be Fitzgerald, Hemingway, Steinbeck. */

#include "std_lib_facilities.h"

int main()
{
    // Variable declaration
    string st1 {" "}, st2 {" "}, st3 {" "};
    string fst {" "}, scnd {" "}, thrd {" "};

    // User input
    cout << "Please, enter three strings (followed by enter) \n";
    cin >> st1 >> st2 >> st3;

    // Output and logic
    if(st1 < st2 && st2 < st3 && st1 < st3) {
        fst = st1;
        scnd = st2;
        thrd = st3;
        cout << fst << ", " << scnd << ", " << thrd << ".";
    } else if(st1 < st2 && st2 > st3 && st1 < st3) {
        fst = st1;
        scnd = st3;
        thrd = st2;
        cout << fst << ", " << scnd << ", " << thrd << ".";
    } else if(st1 > st2 && st2 < st3 && st1 > st3) {
        fst = st2;
        scnd = st3;
        thrd = st1;
        cout << fst << ", " << scnd << ", " << thrd << ".";
    } else if(st1 == st2 && st2 == st3) {
        cout << st1 << ", " << st2 << ", " << st3 << ".";
    } else if(st1 < st2 && st1 == st3) {
        fst = st1;
        scnd = st1;
        thrd = st2;
        cout << fst << ", " << scnd << ", " << thrd << ".";
    } else if(st1 > st2 && st2 == st3) {
        fst = st2;
        scnd = st3;
        thrd = st1;
        cout << fst << ", " << scnd << ", " << thrd << ".";
    } else if(st1 < st2 && st2 > st3) {
        fst = st3;
        scnd = st1;
        thrd = st2;
        cout << fst << ", " << scnd << ", " << thrd << ".";
    } else if(st1 == st2 && st3 > st1 && st3 > st2) {
        fst = st1;
        scnd = st2;
        thrd = st3;
        cout << fst << ", " << scnd << ", " << thrd << ".";
    } else if(st1 == st2 && st3 < st1 && st3 < st2) {
        fst = st3;
        scnd = st2;
        thrd = st1;
        cout << fst << ", " << scnd << ", " << thrd << ".";
    }
}
