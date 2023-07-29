// Done by Carlos Amaral (2023/07/13)

#include "std_lib_facilities.h"

int main()
{
    // Variable declaration
    string first_name;
    string friend_name = "Joana";
    char friend_sex = 0;
    int age = 0;

    // User input
    cout << "Enter the name of the person you want to write to (followed by 'enter'): \n";
    cin >> first_name;

    // Output
    cout << "Dear " << first_name << ",\n";
    cout << "How are you?\n  I'm fine. I miss you!\n";
    cout << "Hope life is going according to plans\n";
    cout << "Have you seen " << friend_name << " recently?\n";

    cout << "Type 'm' if friend is male or 'f' in case friend is female.\n";
    cin >> friend_sex;

    if(friend_sex == 'm') {
        cout << "If you see " << friend_name << " please ask him to call me.\n";
    } else if(friend_sex == 'f') {
        cout << "If you see " << friend_name << " please ask her to call me.\n";
    } else {
        cout << "Sorry. Only f or m letters are accepted";
    }

    cout << "Please, enter the age of the recipient of the letter" << endl;
    cin >> age;

    cout << "I hear you just had a birthday and you are " << age << " years old!\n";

    if(age <= 0 || age >= 110) {
        simple_error("You're kidding!!");
    } else if(age < 12) {
        cout << "Next year you will be " << age + 1 << endl;
    } else if(age == 17) {
        cout << "Next year you will be able to vote" << endl;
    } else if(age > 70) {
        cout << "I hope you are enjoying retirement" << endl;
    }

    cout << "Yours sincerely,\n\n" << endl;
    cout << "Carlos Amaral";


}
