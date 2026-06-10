#include <iostream>
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

    int x;
    cout << "Enter element: ";
    cin >> x;

    int count = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i] == x)
        {
            count++;
        }
    }

    cout << "Frequency of " << x << " is " << count;

    return 0;
}