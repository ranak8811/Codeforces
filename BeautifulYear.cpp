#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    string y;
    cin >> y;

    while (true) {
        vector<char> d;
        string st = to_string(stoi(y) + 1);
        for (char i : st) {
            if (find(d.begin(), d.end(), i) == d.end()) {
                d.push_back(i);
            }
        }

        if (d.size() == y.size()) {
            y = st;
            break;
        } else {
            y = st;
        }
    }

    cout << y << endl;

    return 0;
}
