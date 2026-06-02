//Write a program to Convert decimal to binary. 

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"ENTER A NUMBER TO CONVERT BINARY ";
    cin >> n;

    int ans = 0;
    int i = 0;

    while (n > 0)
    {
        int r = n % 2;
        n = n / 2;
        ans = ans + r * int(pow(10, i));
        i++;
    }

    cout << ans;

    return 0;
}