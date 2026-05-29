// Write a program to Find sum of digits of a numbers.

#include <iostream>
using namespace std;
int main()
{
    int n;
    int r;
    int x = 0;
    cout << "whats the value of n ";
    cin >> n;
    cout << "value of n=" << n << endl;

    while (n > 0)
    {
        r = n % 10;
        x = x + r;
        n = n / 10;
    }
    cout << x;

    return 0;
}