#include <iostream>
using namespace std;

int main() {
     int r, c;
    cout << "ENTER THE NUMBER OF ROWS; ";
    cin >> r;
    cout << "ENTER THE NUMBER OF COLUMN; ";
    cin >> c;

    int a[r][c];
    int b[r][c];
    int sum[r][c];

    cout<<endl<<"MATRIX 1 "<<endl;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> a[i][j];
        }
    }
    
    cout<<"MATRIX 2 "<<endl;

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> b[i][j];
        }
    }

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            sum[i][j] = a[i][j] - b[i][j];
        }
    }

    cout << "Result Matrix: ";
    cout<<endl;

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << sum[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
