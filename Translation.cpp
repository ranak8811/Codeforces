#include <iostream>
#include <string>

using namespace std;

int main() {
    string s, t, rs="";
    cin >> s >> t;

    for (int i = s.size()-1; i>=0; i--) {
        rs+= s[i];
    }

    if (rs == t) cout << "YES";
    else cout << "NO";
}