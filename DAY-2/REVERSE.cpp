// Write a program to Reverse a number.

#include <iostream>
using namespace std;
int main()
{
  int n;
  cout << "whats the value of n; ";
  cin >> n;
  cout << "value of n; " << n << endl;

  int x = 0;
  int r;
  while (n != 0)
  {
    r = n % 10;
    x = x * 10 + r;
    n = n / 10;
  }

  cout << "reverse of x; " << x;

  return 0;
}