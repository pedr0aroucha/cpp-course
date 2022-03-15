#include <iostream>
#include <string>

using namespace std;

int main()
{
  string a;
  string b;

  cin >> a;
  cin >> b;

  cout << a.size() << " " << b.size() << endl;
  cout << a + b << endl;
  char tmp = a[0];
  a[0] = b[0];
  b[0] = tmp;
  cout << a << " " << b << endl;

  return 0;
}