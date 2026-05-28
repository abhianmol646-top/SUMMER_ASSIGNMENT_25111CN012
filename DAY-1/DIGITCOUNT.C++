#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << " whats the value of n ";
    cin >> n;
    cout << " n= " << n << endl;
    int i = 0;
    while (n > 0)
    {
        i++;
        n = n / 10;
    }
    
    cout <<" DIGIT OF THIS NUMBER IS " << i;

    return 0;
}