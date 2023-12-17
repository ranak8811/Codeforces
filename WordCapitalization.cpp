#include <iostream>
#include <string>
using namespace std;

int main() {
    string a, b;
    cin >> a;

    char c = toupper(a[0]);
    b = a.substr(1, a.length() - 1);
    cout << c+b << endl;
}

// #include <iostream>
// #include <string>
// #include <cctype>
// using namespace std;

// int main() {
//     string word;
//     cin >> word;

//     // Capitalize the first letter of the word
//     word[0] = toupper(word[0]);

//     cout << word << endl;

//     return 0;
// }
