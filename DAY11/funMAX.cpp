#include <iostream>
using namespace std;
void max(int a, int b)
{
    if (a > b)
        cout << a;
    else
        cout << b;
}
int main()
{
    int a;
    int b;

    cout << "A=";
    cin >> a;

    cout << "B=";
    cin >> b;

    max(a, b);
}