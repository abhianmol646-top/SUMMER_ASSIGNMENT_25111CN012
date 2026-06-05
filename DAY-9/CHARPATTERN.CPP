// Write a program to Print half pyramid pattern.

#include <iostream>
using namespace std;
int main()
{

    int n;
    cout << "ENTER THE VALUE ";
    cin >> n;

    char count = 'A';
    for (int i = 0; i <= n; i++)
    {

        for (int j = 0; j <= i; j++)
        {
            cout << count;
        }
        count++;

        cout << endl;
    }

    return 0;
}