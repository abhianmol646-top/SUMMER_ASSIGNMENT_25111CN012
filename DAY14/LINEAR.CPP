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

    int res;
    cout << "Enter element to search: ";
    cin >> res;

    int count = -1;

    for (int i = 0; i < n; i++)
    {
        if (a[i] == res)
        {
            count = i;
            break;
        }
    }

    if (count != -1)
        cout << "Element found at index " << count;
    else
        cout << "Element not found";

    return 0;
}