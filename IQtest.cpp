#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int evenCount = 0, oddCount = 0;
    int evenIndex = 0, oddIndex = 0;

    for (int i = 1; i <= n; i++) {
        int num;
        cin >> num;

        if (num % 2 == 0) {
            evenCount++;
            evenIndex = i;
        } else {
            oddCount++;
            oddIndex = i;
        }
    }

    if (evenCount == 1) {
        cout << evenIndex << endl;
    } else {
        cout << oddIndex << endl;
    }

    return 0;
}



// #include <iostream>

// using namespace std;

// int main() {
//     int n;
//     cin >> n;

//     int lon[n];
//     for (int i = 0; i < n; i++) {
//         cin >> lon[i];
//     }

//     int ec = 0, oc = 0, ei = 0, oi = 0;

//     for (int i = 0; i < n; i++) {
//         if (lon[i]%2 == 0) {
//             ec++;
//             ei = i+1;
//         } else {
//             oc++;
//             oi = i+1;
//         }
//     }

//     if (ec >= oc) {
//         cout << oi;
//     }
//     else {
//         cout << ei;
//     }
// }