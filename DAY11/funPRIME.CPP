#include <iostream>
using namespace std;
void prime(int n)
{
     for (int i = 2; i < n; i++)
        {
            if (n % i == 0) 
            {
                cout << "IT IS NOT A PRIME NUMBER";
                break;
            }
            else if (n - 1 == i)
            {
                cout << "prime number";
            }
        }
}
    
int main()
{
    int n;
    cout << "ENTER THE VALUE OF n ";
    cin >> n;

    prime(n);
}