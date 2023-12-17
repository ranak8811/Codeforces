#include <iostream>
#include <string>
using namespace std;            //this code works perfectly

int main() {
    int c = 0, d = 0;
    string s;
    cin >> s;
    
    for (int i = 1; i < s.size(); i++) {
        if (islower(s[i])) {
            c++;
        }
    }

    for (int i = 0; i < s.size(); i++) {
        if (isupper(s[i])) {
            d++;
        }
    }

    if (islower(s[0]) && c == 0) {
        s[0] = toupper(s[0]);

        for (int i = 1; i < s.size(); i++) {
            s[i] = tolower(s[i]);
        }
        cout << s;
    }
    else if (d == s.size()) {
        for (int i = 0; i < s.size(); i++) {
            s[i] = tolower(s[i]);
        }
        cout << s;
    }
    else {
        cout << s;
    }

    return 0;
}



// #include <iostream>
// #include <string>
// #include <cctype>

// using namespace std;             //this code doesn't work properly

// int main() {
//     string s;
//     cin >> s;

//     string ns = "";

//     ns += char(toupper(s[0])) + string(s.begin() + 1, s.end());
//     for (size_t i = 1; i < ns.size(); i++) {
//         ns[i] = tolower(s[i]);
//     }

//     cout << ns << endl;
//     return 0;
// }




// #include <iostream>
// #include <string>
// #include <cctype>

// using namespace std;             //this code doesn't work properly

// int main() {
//     string s = "hELLO";
//     string ns = "";

//     ns += char(toupper(s[0])) + string(s.begin() + 1, s.end());
//     for (size_t i = 1; i < ns.size(); i++) {
//         ns[i] = tolower(ns[i]);
//     }

//     cout << ns << endl;

//     return 0;
// }

