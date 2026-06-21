#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << " what is the value of n ";
    cin >> n;
    cout << " n= " << n << endl;

    int fact=1;
    for (int i = 1; i <= n; i++)
    {

        fact = fact * i;    // 5*1=5  5*2=10   10*3=30  30*4=120 

    }
    cout << " THE FACTORIAL OF X IS; " << fact;

    return 0;
}
