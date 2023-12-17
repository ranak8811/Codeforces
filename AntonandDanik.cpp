#include <iostream>
#include <string>

using namespace std;

int main() {
    int n, ac=0, dc=0;
    string s;

    cin >> n;
    cin >> s;

    for (int i=0; i<n; i++) {
        if (s[i] == 'A') ac++;
        else if (s[i] == 'D') dc++;
    }

    if (ac == dc) cout << "Friendship";
    else if (ac > dc) cout << "Anton";
    else cout << "Danik";
}