#include <iostream>
using namespace std;

int main() {
    int n, f, s, m, c=0;
    cin >> n;

    for (int i=0; i<n; i++) {
        cin >> f >> s;
        m = s - f;

        if (m >= 2) c++;
    }

    cout << c;
}