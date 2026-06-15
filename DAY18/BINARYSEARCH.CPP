#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "ENTER THE VALUE OF N: ";
    cin >> n;

    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int key;
    cout << "ENTER ELEMENT TO SEARCH: ";
    cin >> key;

    int start = 0;
    int end = n - 1;
    int mid;

    while (start <= end)
    {
        mid = start + (end - start) / 2;

        if (a[mid] == key)
        {
            cout << "ELEMENT FOUND AT INDEX " << mid;
            return 0;
        }
        else if (a[mid] < key)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }

    cout << "ELEMENT NOT FOUND";

    return 0;
}