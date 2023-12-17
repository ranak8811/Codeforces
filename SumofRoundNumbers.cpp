#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        vector<int> rnc;
        int n, c = 0;
        cin >> n;

        if (n % 10 != 0) {
            rnc.push_back(n%10);
        }
        int ans = n % 10;
        n -= ans;
        
        if (n % 100 != 0) {
            rnc.push_back(n%100);
        }
        ans = n % 100;
        n -= ans;

        if (n % 1000 != 0) {
            rnc.push_back(n%1000);
        }
        ans = n % 1000;
        n -= ans;

        if (n % 10000 != 0) {
            rnc.push_back(n%10000);
        }
        
        if (n >= 10000 && n % 10000 == 0) {
            rnc.push_back(n);
        }

        cout << rnc.size() << endl;

        for (int i = 0; i < rnc.size(); i++) {
            cout << rnc[i] << " ";
            
        }

        cout << endl;
    }
}




// #include <iostream>
// #include <vector>

// using namespace std;

// int main() {
//     int t;
//     cin >> t;

//     while (t--) {
//         int n;
//         cin >> n;

//         vector<int> terms;
//         int divisor = 1;

//         while (n > 0) {
//             int digit = n % 10;
//             if (digit > 0) {
//                 terms.push_back(digit * divisor);
//             }
//             n /= 10;
//             divisor *= 10;
//         }

//         cout << terms.size() << endl;
//         for (int i = 0; i < terms.size(); i++) {
//             cout << terms[i];
//             if (i < terms.size() - 1) {
//                 cout << " ";
//             }
//         }
//         cout << endl;
//     }

//     return 0;
// }
