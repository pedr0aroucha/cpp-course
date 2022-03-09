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

  if (guess == secret_number)
    print("Parabéns! Você acertou!");
  else
  {
    if (guess > secret_number)
      print("Você errou! O número secreto é menor que o seu palpite.");
    else
      print("Você errou! O número secreto é maior que o seu palpite.");
  }

  return 0;
}