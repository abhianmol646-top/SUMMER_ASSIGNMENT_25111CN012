//Write a program to Check whether a number is prime or not


#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "whats the value of n; ";
    cin >> n;
    cout << "value of n= " << n << endl;

    if (n == 1 || n == 2)
    {
        cout << " IT IS A PRIME NUMBER ";
    }
    else if (n > 2)
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
    return 0;
}