#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    cin >> s;

    string ns = "";
    bool check = false;

    int i = 0;
    while (i < s.length()) {

        if (check) {
            if (s.substr(i, 3) == "WUB") {
                ns += " ";
                i += 3;
            } else {
                ns += s[i];
                i++;
            }
        }
        else if (s.substr(i, 3) == "WUB") {
            i += 3;
        } else {
            check = true;
        }
    }

    cout << ns << endl;
    
}