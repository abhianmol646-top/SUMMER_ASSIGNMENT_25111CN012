#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"ENTER n; ";
    cin >> n;

    int a[n];

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
     
    for (int i = 0; i < n; i++) {
        cout << a[i]<<" ";
    }
    cout<<endl;

    int maxFreq = 0;
    int ans = a[0];

    for (int i = 0; i < n; i++) {
        int count = 0;

        for (int j = 0; j < n; j++) {
            if (a[i] == a[j]) {
                count++;
            }
        }

        if (count > maxFreq) {
            maxFreq = count;
            ans = a[i];
        }
    }

    cout << "Maximum frequency element: " << ans<<endl;
    cout << "Frequency: " << maxFreq;

    return 0;
}