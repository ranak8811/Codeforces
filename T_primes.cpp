#include <iostream>
#include <cmath>

using namespace std;

int main() {
    const int maxN = 1000000;
    int a[maxN + 1] = {0};

    // Generate prime numbers using the Sieve of Eratosthenes
    for (int i = 2; i * i <= maxN; i++) {
        if (a[i] == 0) {
            for (int j = i * i; j <= maxN; j += i) {
                a[j] = 1;
            }
        }
    }

    int n;
    cin >> n;

    long long int b;

    for (int i = 0; i < n; i++) {
        cin >> b;

        if (b == 1) {
            cout << "NO" << endl;
        } else {
            long long int sq = static_cast<long long int>(sqrt(b));
            if (sq * sq == b && a[sq] == 0) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        }
    }

    return 0;
}



// #include <iostream>
// #include <bits/stdc++.h>

// using namespace std;

// int main() {
//     int a[1000000] = {0};
//     for (int i = 2; i <= 1000000; i++) {
//         if (a[i] == 0) {
//             for (int j = 2; i*j <= 1000000; j++) {
//                 a[i*j] = 1;
//             }
//         }
//     }

//     int n;
//     cin >> n;

//     long long int b;
//     long long int sq;

//     for (int i = 0; i < n; i++) {
//         cin >> b;
//         sq = sqrt(b);

//         if (b == 1) cout << "NO" << endl;
//         else if (sq*sq == b && a[sq] == 0) cout << "YES" << endl;
//         else cout << "NO" << endl;
//     }
// }