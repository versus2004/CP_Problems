#include <iostream>
#include <boost/multiprecision/cpp_int.hpp>

namespace mp = boost::multiprecision;
using namespace std;

mp::cpp_int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int main() {
    int m;
    cout << "Enter a number: ";
    cin >> m;

    // Calculate factorial using Boost Multiprecision library
    mp::cpp_int fact = factorial(m);

    // Count the number of trailing zeros
    long count = 0;
    while (fact % 10 == 0) {
        count++;
        fact /= 10;
    }

    cout << "Number of trailing zeros: " << count << "\n";

    return 0;
}
