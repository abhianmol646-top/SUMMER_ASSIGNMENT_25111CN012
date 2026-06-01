#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int largest = 1;

    while (n % 2 == 0)
    {
        largest = 2;
        n=n/2;
    }

    for (int i = 3; i * i <= n; i=i+2)
    {
        while (n % i == 0)
        {
            largest = i;
            n=n/i;
        }
    }

    if (n > 2)
    {
        largest = n;
    }

    cout << " LARGEST PRIME NUMBER = " << largest;

    return 0;
}