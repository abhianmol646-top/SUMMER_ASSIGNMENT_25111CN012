#include <iostream>
using namespace std;
int main()
{

    int n;
    cout << "ENTER THE NO. OF ELEMENTS ";
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

    int count = 0;
    int res = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            count++;
        }
        else
        {
            res++;
        }
    }

    cout << "EVEN ELEMENTS; " << count << endl;
    cout << "ODD ELEMENTS;  " << res << endl;
}