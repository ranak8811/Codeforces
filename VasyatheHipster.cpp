#include <iostream>

using namespace std;

int main() {
    int r, b;
    cin >> r >> b;

    int c, s;

    if (r > b) {
        c = b;
        s = (r - c) / 2;
    }
    else {
        c = r;
        s = (b - c) / 2;
    }

    cout << c << " " << s << endl;
}


// #include <iostream>
// using namespace std;

// int main() {
//     int a, b;
//     cin >> a >> b;

//     int min_socks = min(a, b);
//     int days_different_socks = min_socks;

//     a -= min_socks;
//     b -= min_socks;

//     int days_same_socks = (a + b) / 2;

//     cout << days_different_socks << " " << days_same_socks << endl;

//     return 0;
// }
