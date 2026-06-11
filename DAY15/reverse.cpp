#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"ENTER THE NUMBER OF ELEMENTS ";
    cin >> n;

    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "ARRAY " << endl;
    
    for (int i = 0; i < n; i++)
    {
        cout << a[i]<<" ";
    }
    cout<<endl;

    cout << "REVERSE ARRAY " << endl;
    
    for (int i = n - 1; i >= 0; i--)
    {
        cout << a[i] << " ";
    }

    return 0;
}