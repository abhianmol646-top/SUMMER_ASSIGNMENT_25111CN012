//Wheather THE NUMBER IS PERFECT OR NOT

#include <iostream> 
using namespace std;
int main()
{
    int n;
    cout << " ENTER THE VALUE OF N; ";
    cin >> n;
    int sum = 0;


    for(int i=1;i<n;i++)
    {
        if (n % i == 0)
        {
            cout << i <<" ";
            sum = sum + i;
        }
    }
    if (sum == n)
        cout << " PERFECT NUMBER " << endl;
    else
        cout << " NOT PERFECT NUMBER " << endl;

    return 0;
}