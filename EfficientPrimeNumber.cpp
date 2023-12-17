#include <iostream>

using namespace std;

bool isPrime(int n) {
    if (n < 2) return false;

    for (long long i = 2; i*i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int n;
    cin >> n;

    bool result = isPrime(n);
    if (result) cout << n << " is a Prime number" << endl;
    else cout << n << " is not a Prime number" << endl;
}