#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int a, b;
        cin >> a >> b;

        int diff = abs(a - b);
        int moves = (diff + 9) / 10; // Calculate the minimum moves required

        cout << moves << endl;
    }

    return 0;
}
