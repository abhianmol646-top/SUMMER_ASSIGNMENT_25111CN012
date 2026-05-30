// Write a program to Find LCM of two numbers.

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

    for (int i = 1; i > 0; i++)
    {
        if (i % n1 == 0 && i % n2 == 0)
        {
            cout << "LCM IS; " << i << " ";
            break;
        }
    }
    return 0;
}