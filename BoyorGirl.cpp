#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    string s;
    getline(cin, s);

    vector<char> l;
    for (char x : s) {
        if (x != ' ' && find(l.begin(), l.end(), x) == l.end()) {
            l.push_back(x);
        }
    }

    if (l.size() % 2 == 0) {
        cout << "CHAT WITH HER!" << endl;
    }
    else cout << "IGNORE HIM!" << endl;
}



// #include <iostream>
// #include <vector>
// #include <string>
// #include <algorithm>
// using namespace std;

// int main() {
//     string a;
//     getline(cin, a);

//     vector<char> l;
//     for (char x : a) {
//         if (x != ' ' && find(l.begin(), l.end(), x) == l.end()) {
//             l.push_back(x);
//         }
//     }

//     for (char x : l) {
//         cout << x << " ";
//     }

//     return 0;
// }



// #include <iostream>
// #include <string>
// #include <vector>
// using namespace std;

// int main() {
//     string a;
//     cin >> a;

//     vector<char> l;
//     for (char x : a) {
//         bool found = false;
//         for (char c : l) {
//             if (c == x) {
//                 found = true;
//                 break;
//             }
//         }
//         if (!found) {
//             l.push_back(x);
//         }
//     }

//     for (char c : l) {
//         cout << c << " ";
//     }
//     cout << endl;

//     return 0;
// }
