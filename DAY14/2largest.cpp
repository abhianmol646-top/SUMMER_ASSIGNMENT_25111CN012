#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int large = INT_MIN;
    int secLarge = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        if (a[i] > large)
        {
            secLarge = large;
            large = a[i];
        }
        else if (a[i] > secLarge && a[i] != large)
        {
            secLarge = a[i];
        }
    }

    cout << "Second Largest Element = " << secLarge;

    return 0;
}