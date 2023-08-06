// Done by Carlos Amaral (2023/08/06)

/*
Write a program that “bleeps” out words that you don’t like; that is, you read in words using cin and print them
again on cout. If a word is among a few you have defined, you write out BLEEP instead of that word. Start with
one “disliked word” such as
string disliked = “Broccoli”;
When that works, add a few more.
*/

#include "std_lib_facilities.h"

int main()
{
    // Variable (vector) declaration
    vector<string> words;
    vector<string> disliked = {"netflix", "Socialism", "drugs"};


    // User input and placement into vector
    cout << "Please, introduce some words \n";
    for(string word; cin >> word;) {
        bool bad_word = false;
        words.push_back(word);

        // Logic and output (loop through 'disliked' words
        for(string dislike : disliked) {
            if(word == dislike) {
                bad_word = true;
            }
        }
        if(bad_word) {
            cout << "BLEEP" << "\n";
        } else {
            cout << word << "\n";
        }
    }

}
