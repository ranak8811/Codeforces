#include <iostream>
#include <string>
#include <set>
#include <cctype>

using namespace std;

string Pangram(string s) {
    set<char> charSet;

    if (s.size() >= 26) {
        for (char c : s) {
            char lowerCase = tolower(c);
            charSet.insert(lowerCase);
        }

        if (charSet.size() == 26) {
            return "YES";
        } else {
            return "NO";
        }
    } else {
        return "NO";
    }
}

int main() {
    int n;
    cin >> n;

    string s;
    cin >> s;

    cout << Pangram(s) << endl;


}