#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<int> dl;
    
    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        int moves = (b - (a % b)) % b;
        dl.push_back(moves);
    }
    
    for (int i = 0; i < n; i++) {
        cout << dl[i] << endl;
    }
    
    return 0;
}
