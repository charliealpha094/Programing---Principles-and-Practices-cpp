// Done by Carlos Amaral (2023/08/06)

#include "std_lib_facilities.h"

int main()
{
    // Variable (and vector) declaration
    vector<string> words;
    bool end = false;

    // User input
    for(string temp; cin >> temp;) {
        // place the input into the vector
        words.push_back(temp);
    }

    // Output
    cout << "Number of words: " << words.size() << '\n';

    sort(words);

    for(int i = 0; i < words.size(); i++) {
        cout << words[i] << '\n';
    }
}
