#include <iostream>
#include <set>

using namespace std;

int main() {
    int k, l, m, n, d;
    cin >> k >> l >> m >> n >> d;

    set<int> dragonSet;

    int arr[] = {k, l, m, n};

    for (int i = 0; i < 4; i++) {
        int damage = arr[i];
        int dragon = damage;
        
        while (dragon <= d) {
            dragonSet.insert(dragon);
            dragon += damage;
        }
    }

    cout << dragonSet.size() << endl;

    return 0;
}