#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "ENTER THE ELEMENTS ";
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

    int sum;
    cout << "Enter sum: ";
    cin >> sum;

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] + a[j] == sum)
            {
                cout << "Pair: " << a[i] << " " << a[j] << endl;
            }
        }
    }

    return 0;
}