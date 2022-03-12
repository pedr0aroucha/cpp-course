#include <iostream>
#include <string>

using namespace std;

bool word_exists(string word, char guess)
{
    for (char letter_in_the_word : word)
        if (letter_in_the_word == guess)
            return true;
    return false;
}

int main()
{
    const string SECRET_WORD = "banana";
    bool completed_word, game_over;

    while (!completed_word || !game_over)
    {
        char guess;
        cin >> guess;

        if (word_exists(SECRET_WORD, guess))
            cout << "You got it right, your guess is in the secret word" << endl;
        else
            cout << "You got it wrong, your kick is not in the secret word" << endl;
    }

    return 0;
}