#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> pieces(m);
    for (int i = 0; i < m; i++) {
        cin >> pieces[i];
    }

    // Sort the puzzle pieces in ascending order
    sort(pieces.begin(), pieces.end());

    int min_diff = INT_MAX; // Initialize the minimum difference to a large value

    for (int i = n - 1; i < m; i++) {
        int diff = pieces[i] - pieces[i - n + 1];
        min_diff = min(min_diff, diff);
    }

    cout << min_diff << endl; // Output the minimum difference

    return 0;
}



// #include <iostream>              //wrong for test case 4

// using namespace std;

// int main() {
//     int n, m;
//     cin >> n >> m;

//     int p[m];
//     for (int i = 0; i < m; i++) {
//         cin >> p[i];
//     }

//     sort(p, p+m);
//     int lpd = 100;
//     int fn, ln;

//     for (int i = 0; i < m; i++) {
//         if (i+n-1 >= m) {
//             int d = p[m-1] - p[m-n-1];
//             if (d < lpd) {
//                 lpd = d;
//             }
//         } else {
//             int d = p[i+n-1] - p[i];
//             if (d < lpd) {
//                 lpd = d;
//             }
//         }
//     }
//     cout << lpd << endl;
// }