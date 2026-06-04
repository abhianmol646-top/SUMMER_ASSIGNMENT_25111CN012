// Write a program to Print half pyramid pattern.

#include <iostream>
using namespace std;
int main()
{

    int n;
    cout << "ENTER THE VALUE ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        char tem='A';
        for (int j = 1; j <=i; j++)
        {
            cout << tem ;
            tem++;
        }
        cout<<endl;
    }

    return 0;
}