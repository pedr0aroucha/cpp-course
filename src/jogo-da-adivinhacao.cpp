#include <iostream>

using namespace std;

int main()
{
  cout << "**************************************\n";
  cout << "* Bem-vindos ao jogo da adivinhação! *\n";
  cout << "**************************************\n";

  const int SECRET_NUMBER = 19;
  int guess = 0;
  int attempts = 0;
  double score = 1000.0;

  bool right_guess;
  bool guess_bigger_than_the_secret_number;

  while (!right_guess)
  {
    cout << "Qual é o seu palpite? ";
    cin >> guess;
    attempts++;

    score -= SECRET_NUMBER - guess / 2.0;

    right_guess = guess == SECRET_NUMBER;
    guess_bigger_than_the_secret_number = guess > SECRET_NUMBER;

    if (right_guess)
      cout << "Parabéns! Você acertou o número secreto em " << attempts << " tentativas!\n";
    else
    {
      if (guess_bigger_than_the_secret_number)
        cout << "Você errou! O número secreto é menor que o seu palpite.\n";
      else
        cout << "Você errou! O número secreto é maior que o seu palpite.\n";
    }
  }

  cout.precision(2);
  cout << fixed;
  cout << "Seu score foi: " << score << "\n";

  return 0;
}