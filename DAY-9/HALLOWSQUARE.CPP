/*
Write a program to Print hollow square
pattern.
********
*      *
*      *
*      *
********
*/

#include <iostream>
using namespace std; // 4       0              4
int main()           // 1       6              1
{

    int n;
    cout << "ENTER THE VALUE ";
    cin >> n;

    for (int i = 0; i <= n; i++)
    {
        if (i == 0 || i == n)
        {
            for (int j = 0; j < n; j++)
            {
                cout << "*";
            }
        }
        else
        {
            for (int j = 0; j < 1; j++)
            {
                cout << "*";
            }
            for (int j = 0; j < n - 2; j++)
            {
                cout << " ";
            }
            for (int j = 0; j < 1; j++)
            {
                cout << "*";
            }
        }
        cout << endl;
    }

    return 0;
}