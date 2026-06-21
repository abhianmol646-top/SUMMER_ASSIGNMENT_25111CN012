#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "whats the value of n; ";
    cin >> n;
    cout << " n= " << n << endl;
    int x;

    for (int i = 1; i <= 10; i++)
    {
        x = n * i;
        cout << n << " * " << i << " = " << x << endl;
    }

    return 0;
}
