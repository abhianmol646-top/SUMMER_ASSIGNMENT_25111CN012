#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int min, max;

    cout << "Enter min number: ";
    cin >> min;

    cout << "Enter max number: ";
    cin >> max;

    for (int i = min; i <= max; i++)
    {
        int temp = i;
        int count = 0;
        while (temp > 0)
        {
            temp /= 10;
            count++;
        }

        temp = i;
        int sum = 0;
        while (temp > 0)
        {
            int r = temp % 10;
            sum += round(pow(r, count));
            temp = temp / 10;
        }

        if (sum == i)
        {
            cout << i << " ";
        }
    }

    return 0;
}