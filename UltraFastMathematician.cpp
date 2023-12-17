#include <iostream>
using namespace std;

int main() {
    string fn, sn;
    cin >> fn >> sn;

    string fs = "";

    for (int i = 0; i < fn.length(); i++) {
        if (fn[i] == sn[i]) {
            fs += '0';
        } else {
            fs += '1';
        }
    }

    cout << fs << endl;

    return 0;
}
