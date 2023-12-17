#include <iostream>
#include <string>
using namespace std;

int main() {
    string n;
    cin >> n;

    int c = 0;
    for (int i = 0; i <n.size(); i++) {
        if (n[i] == '4' || n[i] == '7') c++;
    }

    if (c == 4 || c == 7) cout << "YES";
    else cout << "NO";

    return 0;
}

// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;

//     int c = 0;
//     while (n > 0) {
//         int r = n % 10;
//         if (r == 4 || r == 7) {
//             c++;
//         }
//         n /= 10;
//     }

//     if (c == 4 || c == 7) cout << "YES";
//     else cout << "NO";

//     return 0;
// }



// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;
    
//     bool isLucky = true;
//     while (n > 0) {
//         int r = n % 10;
//         if (r != 4 && r != 7) {
//             isLucky = false;
//             break;
//         }
//         n /= 10;
//     }

//     if (isLucky) cout << "YES" << endl;
//     else cout << "NO" << endl;

//     return 0;
// }



// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;
    
//     int c=0;
//     while (n >= 0) {
//         int r = n % 10;
//         if (r == 4 || r == 7) {
//             c++;
//         }
//         n /= 10;
//     }

//     if (c == 4 || c == 7) cout << "YES" << endl;
//     else cout << "NO" << endl;
// }