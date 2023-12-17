#include <iostream>
using namespace std;   // I didn't understand it properly😑

int main() {
    long long n, m, a;
    cin >> n >> m >> a;

    long long numFlagstones = (n / a) * (m / a);

    if (n % a != 0) {
        numFlagstones += (m / a);
    }
    if (m % a != 0) {
        numFlagstones += (n / a);
    }
    if (m % a != 0 && n % a != 0) {
        numFlagstones++;
    }

    cout << numFlagstones << endl;
}