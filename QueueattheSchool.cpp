#include <iostream>
#include <string>
using namespace std;

int main() {
    int n, t;
    cin >> n >> t;
    
    string s;
    cin >> s;

    for (int i = 0; i < t; i++) {
        int j = 0;
        while (j < n - 1) {
            if (s[j] == 'B' && s[j + 1] == 'G') {
                // Swap a boy and a girl without using swap
                char temp = s[j];
                s[j] = s[j + 1];
                s[j + 1] = temp;
                j += 2; // Skip the next girl as she has already moved forward
            } else {
                j++;
            }
        }
    }

    cout << s << endl;

    return 0;
}



// #include <iostream>
// #include <string>

// using namespace std;

// int main() {
//     int n, t;
//     string s;
//     char temp;

//     cin >> n >> t;
//     cin >> s;

//     for (int j = 0; j < t; j++) {
//         for (int i = n-1; i > 0; i--) {
//                 if (s[i] == 'G' && s[i-1] == 'B') {
//                     temp = s[i-1];
//                     s[i-1] = s[i];
//                     s[i] = temp;
//                 }
//             }
//     }
    
//     cout << s;
// }