#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;

        int m = max({a, b, c});
        if ( m == (a+b+c)-m) cout << "YES" << endl;
        else cout << "NO" << endl;
        
    }
}