#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    int n, c = 0;
    cin >> n;
    cin.ignore();

    string s;
    getline(cin, s);

    for (int i = 0; i < n-1; i++)
    {
        if (s[i] == s[i+1]) c++;
    }
    

    cout << c << endl;

    return 0;
}