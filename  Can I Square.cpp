#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        int n;
        cin >> n;
        double totalSquares = 0;

        for (int x = 0; x < n; x++) {
            int m;
            cin >> m;
            totalSquares += m;
        }

        double root = sqrt(totalSquares);
        double remainder = fmod(totalSquares, root); // Corrected the remainder calculation
        bool isPerfectSquare = (remainder == 0);

        cout << (isPerfectSquare ? "YES" : "NO") << endl;
    }

    return 0;
}
