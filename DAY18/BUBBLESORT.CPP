#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cout << "ENTER THE NUMBER OF ELEMENT ";
    cin >> n;
    
    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    cout << endl;
    cout << "BUBBLE SORT " << endl;

    for (int i = 0; i < n; i++)
    {
        bool isswap = false;
        for (int j = 0; j < n - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                swap(a[j], a[j + 1]);
                isswap = true;
            }
        }
        if (isswap == true)
        {
            break;
        }
    }

    for (int i = 0; i < n; i++)
        cout << a[i] << " ";

    return 0;
}