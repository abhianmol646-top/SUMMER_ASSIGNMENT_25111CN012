#include <iostream>
using namespace std;

int main()
{
    int n;
    int c;
    cout << "WHATS THE VALUE OF N;  ";
    cin >> n;
    cout << "n; " << n;

    int a = 0, b = 1;
    cout << "Fibonacci Series: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << a << " ";
        c = a + b;
        a = b;
        b = c;
    }
    return 0;
}
