#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void arms(int n)
{
    int sum = 0;
    int res = n;

    int count = 0;
    while (n > 0)
    {
        n = n / 10;
        count++;
    }
    n = res;
    while (n > 0)
    {
        int r = n % 10;
        sum = sum + round(pow(r, count));
        n = n / 10;
    }
    if (sum == res)
        cout << "ARMSTRONG NUMBER" << endl;
    else
        cout << "NOT ARMSTRONG NUMBER" << endl;
}
int main()
{
    int n;
    cout << "ENTER THE VALUE ";
    cin >> n;

    arms(n);

    return 0;
}