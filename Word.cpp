#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    cin >> s;

    int uc = 0, lc = 0;

    for (int i = 0; i < s.length(); i++)
    {
        char c = s[i];
        if (isupper(c)) uc++;
        else if (islower(c)) lc++;
    }

    if (uc == lc || lc > uc) {
        for (int i = 0; i < s.length(); i++) s[i] = tolower(s[i]);
        
    } 
    if (uc > lc) {
        for (int i = 0; i < s.length(); i++) s[i] = toupper(s[i]);
    } 

    cout << s << endl;
    
}