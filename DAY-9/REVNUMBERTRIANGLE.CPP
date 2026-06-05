// Write a program to Print half pyramid pattern.

#include <iostream>
using namespace std;
int main()
{

    int n;
    cout << "ENTER THE VALUE ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        int count = 1;
        for (int j = n; j >= i; j--)
        {
            cout << count;
            count++;
        }
        cout << endl;
    }

    return 0;
}