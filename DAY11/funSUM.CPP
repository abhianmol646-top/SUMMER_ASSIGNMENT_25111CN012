#include <iostream>
using namespace std;
void sum(int a, int b)
{
    int res = a + b;
    cout << res;
}
int main()
{
    int a;
    int b;
    cout << "A=";
    cin >> a;

    cout << "B=";
    cin >> b;

    sum(a, b);
}