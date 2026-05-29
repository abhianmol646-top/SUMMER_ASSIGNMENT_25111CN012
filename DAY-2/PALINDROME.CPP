// Write a program to Check whether a number is palindrome.

#include <iostream>
using namespace std;
int main()
{
    int n;
    int r;
    int x = 0;
    cout << "whats the value of n; ";
    cin >> n;
    cout << "value of n; " << n << endl;

    int res = n;
    while (n != 0)
    {                          //n=123
        r = n % 10;
        x = x * 10 + r;
        n = n / 10;
    }
     cout<<"reverse of x; "<<x<<endl;
    if (res==x)
    {
        cout << "IT IS PALINDROME NUMBER";
    }
    else
    {
        cout << "IT ISNOT PALINDROME NUMBER";
    }

    return 0;
}
