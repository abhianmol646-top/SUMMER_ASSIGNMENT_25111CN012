#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"ENTER THE NUMBER OF ELEMENTS ";
    cin >> n;

    int a[n];

    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }

    cout << "ARRAY " << endl;
    
    for (int i = 0; i < n; i++)
    {
        cout << a[i]<<" ";
    }
     cout<<endl;



    int temp = a[n-1];

    for(int i=n-1; i>0; i--)
    {
        a[i] = a[i-1];
    }

    a[0] = temp;

    for(int i=0; i<n; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}