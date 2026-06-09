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
    
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + a[i];
    }
    cout << "the sum of array is " << sum << endl;
    cout << "the average of array is " << sum / n;
}