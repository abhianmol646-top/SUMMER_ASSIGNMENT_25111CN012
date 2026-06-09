#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "enter the number of elements " ;
    cin >>n;
    int a[n];

    for (int i = 0; i < n; i++)
    {
        cout << i << " ";
        cin >> a[i];
    }

    cout << " ARRAY " << endl;

    for (int i = 0; i < n; i++)
    {

        cout << a[i] <<" ";
    }

    cout<<endl;

    cout << "MIN VALUE IS; ";
    int ans = INT_MAX;
    
    for (int i = 0; i < n; i++)
    {
        if (ans > a[i])
        {
            ans = a[i];
        }
    }

    cout << ans << endl;

    cout << "MAX VALUE IS; ";
    int res = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        if (res < a[i])
        {
            res = a[i];
        }
    }
    cout << res << endl;

    return 0;
}
