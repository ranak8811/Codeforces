#include <iostream>

using namespace std;

int main() {
    int l, b;
    cin >> l >> b;

    int c = 0;
    while (l <= b) {
        l *= 3;
        b *= 2;
        c++;
        if (l > b) break;
    }
    cout << c << endl;
    return 0;
    
}