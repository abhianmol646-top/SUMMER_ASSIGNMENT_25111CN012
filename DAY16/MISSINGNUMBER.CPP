#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    int a[n - 1];

    for (int i = 0; i < n - 1; i++) {
        cin >> a[i];
    }

    int total = n * (n + 1) / 2;
    int sum = 0;

    for (int i = 0; i < n - 1; i++) {
        sum = sum + a[i];
    }

    cout << "Missing number is: " << total - sum;

    return 0;
}