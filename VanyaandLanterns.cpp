#include <iostream>
#include <algorithm>
#include <vector>
#include <iomanip>

using namespace std;

int main() {
    int n, l;
    cin >> n >> l;

    vector<int> lanterns(n);
    for (int i = 0; i < n; i++) {
        cin >> lanterns[i];
    }

    sort(lanterns.begin(), lanterns.end());

    int max_distance = 0;

    for (int i = 0; i < n-1; i++) {
        int adjacent_distance = lanterns[i+1] - lanterns[i];
        if (max_distance < adjacent_distance) {
            max_distance = adjacent_distance;
        }
    }

    int first_distance = lanterns[0];
    int last_distance = l - lanterns[n-1];

    double result = std::max(std::max(max_distance/2.0, 
            static_cast<double>(first_distance)), static_cast<double>(last_distance));
    cout << fixed << setprecision(10) << result << endl;
    return 0;
}