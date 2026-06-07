#include <iostream>
using namespace std;

void factorial(int n)
{

    int fact=1;
    for (int i = 1; i <= n; i++)
    {

        fact = fact * i;  

    }
    cout << " THE FACTORIAL OF X IS; " << fact;
}




int main()
{
 int n;
 cout<<"ENTER THE VALUE ";
 cin>>n;

 factorial(n);

}