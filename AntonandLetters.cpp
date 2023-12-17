#include <iostream>
#include <string>
#include <unordered_set>

using namespace std;

int main() {
    string s;
    getline(cin, s);

    string wc = s.substr(1, s.length() - 2);

    unordered_set<char> distinctChars;

    for (char c : wc) {
        if (c != ' ' && c != ',') {
            distinctChars.insert(c);
        }
    }

    cout << distinctChars.size() << endl;

    return 0;
}






// #include <iostream>          //this code is not complete
// #include <string>
// #include <vector>

// using namespace std;

// int main() {
//     // string x = "{a, b, c}";
//     string x;
//     getline(cin, x);
//     string d = x.substr(1, x.length() - 2); // Extract the substring between '{' and '}'

//     vector<string> e;
//     size_t pos = 0;
//     while ((pos = d.find(", ")) != string::npos) {
//         string token = d.substr(0, pos); // Extract each token separated by ", "
//         e.push_back(token);
//         d.erase(0, pos + 2); // Remove the processed token and the ", " from the string
//     }

//     // Add the last token (or the only token if there's no comma)
//     e.push_back(d);

//     // Print the tokens
//     for (const string& token : e) {
//         cout << token << endl;
//     }

//     return 0;
// }
