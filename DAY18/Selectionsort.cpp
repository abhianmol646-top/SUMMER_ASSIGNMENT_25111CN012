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
    cout << "SELECTION SORT " << endl;

    for (int i = 0; i < n; i++) 
    {
        int index = i;            
        for (int j = i + 1; j < n; j++) 
        {
            if (a[j] < a[index])  
            {
                index = j;  
            }
        }

        swap(a[i], a[index]);  
    }

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}