#include <iostream>
using namespace std;

int main() {
    int n, h, m=0, c;
    cin >> n >> h;

    for (int i=0; i<n; i++) {
        cin >> c;

        if (c > h) m += 2;
        else m += 1;
    }

    cout << m;
}