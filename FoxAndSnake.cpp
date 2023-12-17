#include <iostream>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    string es = "";
    bool check = false;

    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            if (check) {
                es += "#" + string(m - 1, '.') + "\n";
                check = false;
            } else {
                es += string(m - 1, '.') + "#" + "\n";
                check = true;
            }
        } else {
            es += string(m, '#') + "\n";
        }
    }

    cout << es;

    return 0;
}
