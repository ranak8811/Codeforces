#include <iostream>
#include <vector>
using namespace std;

string easy_or_hard(const vector<int>& k) {
        for (int i=0; i<k.size(); i++) {
            if (k[i] == 1) return "HARD";
        }
        return "EASY";
    }

int main() {
    int n;
    cin >> n;

    vector<int> k(n);
    for (int i=0; i<n; i++) {
        cin >> k[i];
    }
    
    cout << easy_or_hard(k);
}