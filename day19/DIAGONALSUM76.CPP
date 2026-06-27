#include <iostream>
using namespace std;

int main() {
     int n;
    cout << "ENTER THE NUMBER OF square matrix; ";
    cin >> n;
    
    int a[n][n];

    cout<<endl<<"MATRIX  "<<endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }

    int primarySum = 0, secondarySum = 0;

    for (int i = 0; i < n; i++) 
    {
        primarySum += a[i][i];             
        secondarySum += a[i][n - i - 1];  
    }

    cout << "Primary Diagonal Sum = " << primarySum << endl;
    cout << "Secondary Diagonal Sum = " << secondarySum << endl;

    return 0;
}
