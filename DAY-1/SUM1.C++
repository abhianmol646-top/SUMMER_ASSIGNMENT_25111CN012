#include <iostream>
using namespace std;
int main()
{
    int n = 0;
    int x;
    cout << "whats the value of x=";
    cin >> x;
    cout << "value of=" << x << endl;

    for (int i = 1; i <= x; i++)
    {
        cout << i << " " << endl;
        
        n = n + i;
    }
    int result = n;
    cout << "THE SUM OF" << " " << x << " " << "is; " << result;

    return 0;
}
