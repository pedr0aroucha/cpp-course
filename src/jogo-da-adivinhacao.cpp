#include <iostream>

using namespace std;

void print(string content = "")
{
  if (content.empty())
    return;

  cout << content << endl;
}

int main()
{
  print("**************************************");
  print("* Bem-vindos ao jogo da adivinhação! *");
  print("**************************************");

  int secret_number = 32;
  int guess = 0;

  print("Qual é o seu palpite?");
  cin >> guess;
  print("O valor do seu palpite é " + to_string(guess));

  bool right_guess = guess == secret_number;
  bool guess_bigger_than_the_secret_number = guess > secret_number;

  if (right_guess)
    print("Parabéns! Você acertou!");
  else
  {
    if (guess_bigger_than_the_secret_number)
      print("Você errou! O número secreto é menor que o seu palpite.");
    else
      print("Você errou! O número secreto é maior que o seu palpite.");
  }

  return 0;
}