#include <iostream>
using namespace std;

int main() {
    long long n; // Use long long for large values of n
    cin >> n;

    long long result;

    // Calculate f(n) based on whether n is even or odd
    if (n % 2 == 0) {
        // If n is even, f(n) is half of n
        result = n / 2;
    } else {
        // If n is odd, f(n) is half of -(n+1)
        result = -(n + 1) / 2;
    }

    cout << result << endl;

    return 0;
}



// #include <iostream>
// using namespace std;

// int main() {
//     int n , sum = 0;
//     cin >> n;

//     for (int i = 1; i < n+1; i++) {
//         if (i % 2 != 0) {
//             sum -= i;
//         } else {
//             sum += i;
//         }
//     }
//     cout << sum << endl;
// }