#include <iostream>
#include <string>
#include <map>

using namespace std;

const string SECRET_WORD = "BANANA";
map<char, bool> guesses = {
    {'B', false},
    {'A', false},
    {'N', false},
    {'A', false},
    {'N', false},
    {'A', false},
};

bool word_exists(string word, char guess)
{
    for (char letter_in_the_word : word)
        if (letter_in_the_word == guess)
            return true;
    return false;
}

int main()
{

    bool completed_word, game_over;

    while (!completed_word || !game_over)
    {
        for (char letter_in_the_word : SECRET_WORD)
        {
            if (guesses[letter_in_the_word])
                cout << letter_in_the_word << " ";
            else
                cout << "_ ";
        }

        cout << endl;

        char guess;
        cin >> guess;

        guesses[guess] = true;

        if (word_exists(SECRET_WORD, guess))
            cout << "You got it right, your guess is in the secret word" << endl;
        else
            cout << "You got it wrong, your kick is not in the secret word" << endl;
    }

    return 0;
}