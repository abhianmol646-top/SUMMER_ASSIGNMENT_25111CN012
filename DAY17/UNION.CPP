#include <iostream>
using namespace std;

int main()
{
    int n1, n2;
    cout<<"ENTER THE NUMBER OF ELEMENTS OF ARRAY 1 ";
    cin >> n1;
    int a[n1];

    for (int i = 0; i < n1; i++)
        cin >> a[i];

    cout<<"ENTER THE NUMBER OF ELEMENTS OF ARRAY 2 ";
    cin >> n2;
    int b[n2];

    for (int i = 0; i < n2; i++)
        cin >> b[i];

    int c[n1 + n2];
    int k = 0;

    for (int i = 0; i < n1; i++)
        c[k++] = a[i];

    for (int i = 0; i < n2; i++)
    {
        bool found = false;

        for (int j = 0; j < k; j++)
        {
            if (b[i] == c[j])
            {
                found = true;
                break;
            }
        }

        if (!found)
            c[k++] = b[i];
    }

    cout << "Union: ";

    for (int i = 0; i < k; i++)
        cout << c[i] << " ";

    return 0;
}