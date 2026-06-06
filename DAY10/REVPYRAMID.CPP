/*
Write a program to Print reverse pyramid. 
 
*********    // 0     9     0          
 *******     // 1     7     1
  *****      // 2     5     2
   ***       // 3     3     3 
    *        // 4     1     4
*/


#include <iostream>  
using namespace std;
int main()
{
   
    int n;
    cout << "ENTER THE VALUE OF n ";
    cin >> n;

 for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i ; j++)
        {
            cout << " ";
        }
        for (int j = 0; j <2*n-(2*i+1); j++)
        {
            cout << "*";
        }

        cout << endl;

    }
    return 0;
}