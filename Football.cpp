#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    getline(cin, s);

    int c = 1;
    for (int i = 0; i < s.length()-1; i++) {
        if (s[i] == s[i+1]) c++;
        else c = 1;

        if (c >= 7) break;
    }

    if (c >= 7) cout << "YES" << endl;
    else cout << "NO" << endl;

}