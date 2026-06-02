//Write a program to Convert binary to decimal.

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"ENTER A NUMBER TO CONVERT DECIMAL ";
    cin >> n;

    int ans = 0;
    int i = 0;

    while (n > 0)
    {
        int r = n % 10;
        n = n / 10;
        /*
        ans=r*mul+ans;
        mul=mul*10;
        */
        ans = r * int(pow(2, i)) + ans;
        i++;
    }

    cout << ans;

    return 0;
}