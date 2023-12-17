#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, k, prevLastDigit = -1, c = 0;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> k;
        int lastDigit = k % 10;

        if (lastDigit != prevLastDigit) {
            c++; // Increase the group count when the last digits are different
        }

        prevLastDigit = lastDigit; // Update prevLastDigit for the next iteration
    }

    cout << c << endl;
}



// #include <iostream>
// #include <vector>
// using namespace std;

// int main() {
//     int n, k, fld, sld, c=0;
//     cin >> n;

//     vector<int> v(n);
//     for (int i=0; i<n; i++) {
//         cin >> k;
//         v[i] = k;
//     }

//     for (int i=0; i<n-1; i++) {
//         fld = v[i] % 10;
//         sld = v[i+1] % 10;

//         if (fld != sld) c++;
//     }
//     cout << c+1;
// }