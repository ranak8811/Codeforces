#include <iostream>

using namespace std;

// Function to check if a number is lucky
bool isLucky(int num) {
    while (num > 0) {
        int digit = num % 10;
        if (digit != 4 && digit != 7) {
            return false;
        }
        num /= 10;
    }
    return true;
}

int main() {
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        if (n % i == 0 && isLucky(i)) {
            cout << "YES";
            return 0; // Found a lucky divisor, no need to continue
        }
    }

    cout << "NO"; // If no lucky divisor found

    return 0;
}




// #include <iostream>   // this code gives wrong results

// using namespace std;

// int main() {
//     int n, r;
//     cin >> n;

//     for (int i = 1; i < n; i++) {
//         r = n / i;
//         string s = to_string(r);
//         int l = 0;
//         for (char x : s) {
//             if (x == '4' || x == '7') {
//                 l++;
//             } else {
//                 break;
//             }
//         }
//         if (l == s.size()) {
//             cout << "YES";
//             break;
//         }
//     }
// }