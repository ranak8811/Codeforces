#include <iostream>
#include <string>
using namespace std;

int main() {
    string p;
    cin >> p;

    string pl = "HQ9";

    bool willPrintOutput = false;
    for (char c : p) {
        if (pl.find(c) != string::npos) {
            if (c == 'H' || c == 'Q' || c == '9') {
                willPrintOutput = true;
                break;
            }
        }
    }

    if (willPrintOutput) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
