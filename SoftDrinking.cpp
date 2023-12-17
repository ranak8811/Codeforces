#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    int drink = k * l;
    int tToast = drink / nl;
    int tLimes = c * d;
    int salt = p / np;

    int maximum_toast_possible = min({tToast, tLimes, salt});
    cout << (maximum_toast_possible / n) << endl;

}