#include <bits/stdc++.h>

using namespace std;

void customSwap(int &x, int &y) {
    x = x ^ y;
    y = x ^ y;
    x = x ^ y;
}

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        int n, k;
        cin >> n >> k;

        int arr[n];
        for (int m = 0; m < n; m++) {
            arr[m] = m + 1;
        }

        reverse(arr, arr + n);

        for (int x = 0; x < k / 2; x++) {
            customSwap(arr[x], arr[n-x-1]);
        }

        for (int z = 0; z < n; z++) {
            cout << arr[z] << " ";
        }

        cout << endl;
    }

    return 0;
}
