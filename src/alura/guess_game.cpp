#include <iostream>

using namespace std;

int main()
{
  cout << "**************************************\n";
  cout << "* Welcome to guess game! *\n";
  cout << "**************************************\n";

  cout << "Chose your level \n";
  cout << "Easy (E), Medium (M) or Hard (H) \n";

  char level;

  cin >> level;

  int attempts_number;

  if (level == 'E')
    attempts_number = 15;
  else if (level == 'M')
    attempts_number = 10;
  else if (level == 'H')
    attempts_number = 5;
  else
  {
    cout << "Invalid level!\n";
    return 0;
  }

  const int SECRET_NUMBER = 19;
  int guess = 0;
  int attempts = 0;
  double score = 1000.0;

  bool right_guess;
  bool guess_bigger_than_the_secret_number;

  for (attempts = 1; attempts <= attempts_number; attempts++)
  {
    cout << "What's your guess? ";
    cin >> guess;

    score -= SECRET_NUMBER - guess / 2.0;

    right_guess = guess == SECRET_NUMBER;
    guess_bigger_than_the_secret_number = guess > SECRET_NUMBER;

    if (right_guess)
    {
      cout << "Congratulations! You go it right with " << attempts << " guesses!\n";

      cout.precision(2);
      cout << fixed;
      cout << "Your score was: " << score << "\n";

      return 0;
    }
    else
    {
      if (guess_bigger_than_the_secret_number)
        cout << "You missed! The secret number is smaller that your guess.\n";
      else
        cout << "You missed! The secret number is bigger than your guess.\n";
    }
  }

  cout << "You lost!\n";

  return 0;
}