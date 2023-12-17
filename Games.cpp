#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<vector<int>> test(n, vector<int>(2));
    int count = 0;

    for (int i = 0; i < n; i++) {
        int h, g;
        cin >> h >> g;

        test[i][0] = h;
        test[i][1] = g;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i != j) {
                if (test[i][0] == test[j][1]) {
                    count++;
                }
            }
        }
    }

    cout << count << endl;
}