#include <iostream>

using namespace std;

void print(string content = "")
{
  if (content.empty())
    return;

  cout << content;
}

int main()
{
  print("**************************************\n");
  print("* Bem-vindos ao jogo da adivinhação! *\n");
  print("**************************************\n");

  const int SECRET_NUMBER = 19;
  int guess = 0;
  int attempts = 0;

  bool right_guess;
  bool guess_bigger_than_the_secret_number;

  while (!right_guess)
  {
    print("Qual é o seu palpite? ");
    cin >> guess;
    attempts++;

    right_guess = guess == SECRET_NUMBER;
    guess_bigger_than_the_secret_number = guess > SECRET_NUMBER;

    if (right_guess)
      print("Parabéns! Você acertou o número secreto em " + to_string(attempts) + " tentativas!\n");
    else
    {
      if (guess_bigger_than_the_secret_number)
        print("Você errou! O número secreto é menor que o seu palpite.\n");
      else
        print("Você errou! O número secreto é maior que o seu palpite.\n");
    }
  }

  return 0;
}