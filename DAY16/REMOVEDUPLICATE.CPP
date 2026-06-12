#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"ENTER THE NUMBER OF ELEMENTS ";
    cin >> n;

    int a[n];

    for (int i = 0; i < n; i++) 
    {
        cin >> a[i];
    }

    
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;


    cout << "Array after removing duplicates: ";

    for (int i = 0; i < n; i++) 
    {
        bool dupli = false;

        for (int j = 0; j < i; j++) 
        {
            if (a[i] == a[j]) 
            {
                dupli= true;
                break;
            }
        }

        if (dupli == false) 
        {
            cout << a[i] << " ";
        }
    }

    return 0;
}