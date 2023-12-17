#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int denominations[] = {100, 20, 10, 5, 1};
    int count = 0;

    for (int i = 0; i < 5; i++) {
        count += n / denominations[i];
        n %= denominations[i];
    }

    cout << count << endl;
    return 0;
}




// #include <iostream>

// using namespace std;

// int main() {
//     long long n;
//     cin >> n;

//     long long count = 0;

//     // Start with the largest bill and count how many of them can be used.
//     count += n / 100; // Count 100-dollar bills.
//     n %= 100; // Update the remaining balance.

//     count += n / 20; // Count 20-dollar bills.
//     n %= 20;

//     count += n / 10; // Count 10-dollar bills.
//     n %= 10;

//     count += n / 5; // Count 5-dollar bills.
//     n %= 5;

//     // The remaining balance is in 1-dollar bills.
//     count += n;

//     cout << count << endl;

//     return 0;
// }




// #include <iostream>

// using namespace std;

// int main() {
//     int n;
//     cin >> n;

//     int denominator[] = {1, 5, 10, 20, 100};
//     int count = 0;

//     while ( n > 0) {
//         if (n  >= denominator[4]) {
//             n -= denominator[4];
//             count++;
//         }
//         else if (n  >= denominator[3]) {
//             n -= denominator[3];
//             count++;
//         }
//         else if (n >= denominator[2]) {
//             n -= denominator[2];
//             count++;
//         }
//         else if (n >= denominator[1]) {
//             n -= denominator[1];
//             count++;
//         }
//         else if (n >= denominator[0]) {
//             n -= denominator[0];
//             count++;
//         }
//     }

//     cout << count << endl;
//     return 0;
// }