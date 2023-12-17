#include <iostream>

using namespace std;

int lastTwoDigitsOfPowerOfFive(long long n) {
    int base = 5; // Base number
    int result = 1; // Initialize result

    // Perform modular exponentiation to find last two digits
    while (n > 0) {
        if (n & 1) {
            result = (result * base) % 100;
        }
        base = (base * base) % 100;
        n >>= 1; // Equivalent to n /= 2
    }
    return result;
}

int main() {
    long long n;
    cin >> n;

    int lastTwoDigits = lastTwoDigitsOfPowerOfFive(n);
    cout << lastTwoDigits << endl;

    return 0;
}