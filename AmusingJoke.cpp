#include <iostream>
#include <string>

using namespace std;

int main() {
    string x, y, z;
    cin >> x >> y >> z;

    string c = x + y;

    sort(c.begin(), c.end());
    sort(z.begin(), z.end());

    if (c == z) cout << "YES" << endl;
    else cout << "NO" << endl;
}