#include <iostream>
using namespace std;

void rev(int n)
{
    if (n == 0)
        return;

    cout << n % 10;
    rev(n / 10);
}

int main()
{
    int n;
    cout << "ENTER THE VALUE ";
    cin >> n;

    cout << "THE REVERSE OF " << n << " is ";
    rev(n);
    
    return 0;
}