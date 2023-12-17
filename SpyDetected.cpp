#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int index = -1;
        if (a[0] == a[1]) {
            for (int i = 1; i < n; i++) {
                if (a[i] != a[0]) {
                    index = i + 1; // Indexing starts from 1
                    break;
                }
            }
        } else {
            if (a[1] == a[2]) {
                index = 1;
            } else {
                index = 2;
            }
        }

        cout << index << endl;
    }

    return 0;
}