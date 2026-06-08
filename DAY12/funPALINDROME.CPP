#include <iostream>
using namespace std;
void pal(int n)
{
    int sum = 0;
    while (n > 0)
    {
        int r = n % 10;
        sum = sum * 10 + r;
        n = n / 10;
    }

    cout << sum;
}
int main()
{
    int n;
    cout << "ENTER THE VALUE ";
    cin >> n;

    pal(n);

    return 0;
}