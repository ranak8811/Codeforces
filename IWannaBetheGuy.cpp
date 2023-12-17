#include <iostream>
#include <set>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    set<int> levelsX, levelsY;
    int p, q;
 
    cin >> p;
    for (int i = 0; i < p; i++) {
        int level;
        cin >> level;
        levelsX.insert(level);
    }
 
    cin >> q;
    for (int i = 0; i < q; i++) {
        int level;
        cin >> level;
        levelsY.insert(level);
    }
 
    set<int> combinedLevels = levelsX;
    combinedLevels.insert(levelsY.begin(), levelsY.end());
 
    if (combinedLevels.size() == n) {
        cout << "I become the guy." << endl;
    } else {
        cout << "Oh, my keyboard!" << endl;
    }
 
    return 0;
}