#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int maxLen = 1;
    int currentLen = 1;

    for (int i = 1; i < n; i++) {
        if (a[i] >= a[i - 1]) {
            currentLen++;
        } else {
            maxLen = max(maxLen, currentLen);
            currentLen = 1;
        }
    }

    maxLen = max(maxLen, currentLen);

    cout << maxLen << endl;
    return 0;
}