#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> way;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;

        int d = ceil(static_cast<double>(x) / 2.0);
        way.push_back(d);
    }

    for (int i = 0; i < way.size(); i++) {
        cout << way[i]-1 << endl;
    }

    return 0;
}




// #include <iostream>
// #include <cmath>
// #include <vector>

// using namespace std;

// int main() {
//     int n;
//     cin >> n;

//     vector<int> way;

//     for (int i = 0; i < n; i++) {
//         int x;
//         cin >> x;

//         int d = ceil((x / 2)-1);
//         way.push_back(d);
//     }

//     for (int i = 0; i < way.size(); i++) {
//         cout << way[i] << endl;
//     }
// }