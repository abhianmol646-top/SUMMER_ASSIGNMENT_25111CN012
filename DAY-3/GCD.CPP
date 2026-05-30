// Write a program to Find GCD of two numbers.

#include <iostream>
using namespace std;
int main()
{
    int n1;
    cout << "WHATS THE N1(min) ";
    cin >> n1;
    cout << "value of n1; " << n1 << endl;

    int n2;
    cout << "WHATS THE N2(max) ";
    cin >> n2;
    cout << "value of n2; " << n1 << endl;
    

    
    int r;
    for (int i = 1; i <= n1; i++)
    {
        if (n1 % i == 0 && n2 % i == 0)
        {
            cout<<i<<" ";
            r = i;
        }
    }
    cout << r;

    return 0;
}