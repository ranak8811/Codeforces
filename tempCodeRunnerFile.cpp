#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    string s;
    cin >> s;

    string wc = s.substr(1, s.length() - 2);

    vector<string> strArr;
    size_t pos = 0;
    while ((pos = wc.find(", ")) != string::npos) {
        string token = wc.substr(0, pos);
        strArr.push_back(token);
        wc.erase(0, pos + 2);
    }

    strArr.push_back(wc);

    for (const string& token : strArr) {
        cout << token << endl;
    }

    return 0;
}
