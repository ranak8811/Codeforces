#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        // Sort the array in non-decreasing order
        sort(a, a + n);

        // Check if the absolute difference between any two adjacent elements is at most one
        bool possible = true;
        for (int i = 1; i < n; i++) {
            if (a[i] - a[i - 1] > 1) {
                possible = false;
                break;
            }
        }

        if (possible) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
