#include <bits/stdc++.h>
using namespace std;

int main() {
    long long m;
    long count = 0;
    cin >> m;

    long long fact = 1;

    // Calculate factorial
    while (m > 0) {
        fact *= m;
        m--;
    }


    // Count the number of trailing zeros
    while (fact % 10 == 0) {
        count++;
        fact /= 10;
    }

    cout << count << "\n";

    return 0;
}
