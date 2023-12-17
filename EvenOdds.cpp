#include <iostream>
using namespace std;

int main() {
    long long n, k;
    cin >> n >> k;

    if (k <= (n + 1) / 2) {
        // Odd numbers from 1 to n
        cout << 2 * k - 1 << endl;
    } else {
        // Even numbers from 1 to n
        cout << 2 * (k - (n + 1) / 2) << endl;
    }

    return 0;
}



// #include <iostream>    //shows runtime errors in some cases
// #include <cmath>
// using namespace std;

// int main() {
//     int n, k;
//     cin >> n >> k;

//     int arr[n];
//     if (n % 2 == 0) {
//         int temp = n;
//         for (int i = 0; i < n/2; i++) {
//             arr[i] = 1 + (2*i);
//             arr[n-1-i] = temp - (2*i);
//         }
//     } else {
//         int temp = n-1;
//         arr[static_cast<int>(ceil(n/2))] = n;
//         for (int i = 0; i < n/2; i++) {
//             arr[i] = 1 + (2*i);
//             arr[n-1-i] = temp - (2*i);
//         }
//     }

//     cout << arr[k-1] << endl;

//     return 0;
// }
