// #include <iostream>

// using namespace std;

// int main() {
//     int k, n, w;
//     cin >> k >> n >> w;

//     // Calculate the total cost of buying w bananas
//     int totalCost = (w * (w + 1) / 2) * k;

//     // Calculate the amount of money the soldier needs to borrow
//     int borrow = (totalCost > n) ? (totalCost - n) : 0;

//     cout << borrow << endl;

//     return 0;
// }



#include <iostream>

using namespace std;

int main() {
    int k, n, w;
    cin >> k >> n >> w;

    long long s = 0;
    for (int i = 0; i < w; i++)
    {
        int t = k * (i+1);
        s += t;
    }
    if (s > n) cout << s-n << endl;
    else cout << 0 << endl;
    }