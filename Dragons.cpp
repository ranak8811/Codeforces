#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int s, n;
    cin >> s >> n;

    vector<pair<int, int>> dragons(n);
    for (int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;
        dragons[i] = make_pair(x, y);
    }

    sort(dragons.begin(), dragons.end());

    int count = 0;
    for (const auto& dragon : dragons) {
        int x = dragon.first;
        int y = dragon.second;

        if (x < s) {
            count++;
            s += y;
        } else break;
    }

    if (count == n) cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}