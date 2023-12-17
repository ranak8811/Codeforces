#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> cl(n);
    for (int i = 0; i < n; i++) {
        cin >> cl[i];
    }

    // Sort the vector in descending order
    sort(cl.rbegin(), cl.rend());

    double d = 0;
    for (int i = 0; i < n; i++) {
        d += cl[i];
    }
    d /= 2.0;

    int x = 0, i = 0;
    while (x <= d) {
        x += cl[i];
        i++;
    }

    cout << i << endl;

    return 0;
}
