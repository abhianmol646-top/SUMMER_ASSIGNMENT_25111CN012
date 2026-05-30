//Write a program to Print prime numbers in a range. 

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "whats the value of n; ";
    cin >> n;
    cout << "value of n= " << n << endl;

    int r1;
    cout << "WHATS THE MINIMUM RANGE ";
    cin >> r1;
    cout << "VALUE OF R(min) " << r1 << endl;

    int r2;
    cout << "WHATS THE MAXIMUM RANGE ";
    cin >> r2;
    cout << "VALUE OF R(max) " << r2 << endl;

    for (int i = r1; i <= r2; i++)
    {
        if (n % i == 0)
        {
            cout << i << " ";
        }
    }

    return 0;
}