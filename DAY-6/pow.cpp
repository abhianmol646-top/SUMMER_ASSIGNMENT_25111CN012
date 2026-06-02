//Write a program to Find x^n without pow().
 
#include <iostream>
using namespace std;

int main()
{
    int x, n;
    cout << "ENTER A BASE ";
    cin >> x;
    cout << "ENTER THE EXPONENT ";
    cin >> n;

    int ans = 1;

    for (int i = 1; i <= n; i++)
    {
        ans = ans * x;
    }

    cout << ans;
    return 0;
}