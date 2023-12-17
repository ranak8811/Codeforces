#include <iostream>
using namespace std;

int main() {
    int n, maxCapacity = 0, currentCapacity = 0;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;

        currentCapacity = currentCapacity - a + b;

        if (currentCapacity > maxCapacity) {
            maxCapacity = currentCapacity;
        }
    }

    cout << maxCapacity << endl;

    return 0;
}
