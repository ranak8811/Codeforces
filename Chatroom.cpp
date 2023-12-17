#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    cin >> s;

    string target = "hello";

    int i = 0;


    for (char ch : s) {
        if (ch == target[i]) {
            i++;
        }
        if (i == 5) {
            break;
        }
    }

    if (i == 5) {
        cout << "YES";
    } else {
        cout << "NO";
    }

    return 0;
}



// #include <iostream>     // this code is not correct
// #include <string>

// using namespace std;

// int main() {
//     string s, ns = "", cs = "hello";
//     cin >> s;

//     for (char i : s) {
//         if (i == cs[ns.size()] && (find(s.begin(), s.end(), i) == s.end())) {
//             ns += i;
//         }
//     }

//     if (ns == cs) cout << "YES";
//     else cout << ns;
// }