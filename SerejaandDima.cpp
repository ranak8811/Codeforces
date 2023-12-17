#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a;
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        a.push_back(num);
    }

    int s = 0, d = 0;
    while (!a.empty()) {
        if (a.front() > a.back()) {
            s += a.front();
            a.erase(a.begin());
        } else {
            s += a.back();
            a.pop_back();
        }

        if (!a.empty()) {
            if (a.front() > a.back()) {
                d += a.front();
                a.erase(a.begin());
            } else {
                d += a.back();
                a.pop_back();
            }
        }
    }

    cout << s << " " << d;
    return 0;
}
