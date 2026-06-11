#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "ENTER THE NUMBER OF ELEMENTS ";
    cin >> n;

    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    cout << "ARRAY " << endl;

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;

    int j = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i] != 0)
        {
            a[j] = a[i];
            j++;
        }
    }

    while (j < n)
    {
        a[j] = 0;
        j++;
    }

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}