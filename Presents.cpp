// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;

//     int arr[n];
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }

//     for (int j = 1; j <= n; j++) {
//         for (int k = 0; k < n; k++) {
//             if (arr[k] == j) {
//                 cout << k+1 << " ";
//             }
//         }
//     }
// }



#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> gifts(n);

    for (int i = 0; i < n; i++) {
        cin >> gifts[i];
    }

    vector<int> recipients(n);

    for (int i = 0; i < n; i++) {
        recipients[gifts[i] - 1] = i + 1;
    }

    for (int i = 0; i < n; i++) {
        cout << recipients[i] << " ";
    }

    return 0;
}
