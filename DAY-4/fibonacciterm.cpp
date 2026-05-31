#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "WHATS THE VALUE OF N: ";
    cin >> n;
    cout << "N= " << n << endl;

    int a = 0, b = 1;
    if (n == 0)
    {
        cout << "The " << n << " Fibonacci term is: " << a;
        return 0;
    }
    for (int i = 2; i <= n; i++)
    {
        int c = a + b;
        a = b;
        b = c;
    }
    cout << "The " << n << " Fibonacci term is: " << b;
    return 0;
}
