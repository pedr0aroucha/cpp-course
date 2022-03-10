#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

int q_commas(string str)
{
  int count = 0;
  for (int i = 0; i < str.length(); i++)
  {
    if (str[i] == ',')
    {
      count++;
    }
  }
  return count;
}

vector<int> parseInts(string str)
{

  stringstream ss(str);
  char ch;
  int x;

  vector<int> v;

  int commas = q_commas(str) + 1;

  for (int i = 0; i < commas; i++)
  {
    ss >> x;
    v.push_back(x);
    if (i + 1 < commas)
    {
      ss >> ch;
    }
  }

  return v;
}

int main()
{
  string str;
  cin >> str;
  vector<int> integers = parseInts(str);
  for (int i = 0; i < integers.size(); i++)
  {
    cout << integers[i] << "\n";
  }

  return 0;
}