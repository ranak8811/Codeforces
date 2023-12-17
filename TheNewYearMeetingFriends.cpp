// #include <iostream>
// #include <vector>
// #include <algorithm>

// using namespace std;

// int main() {
//     vector<int> points;
//     for (int i = 0; i < 3; i++) {
//         int x;
//         cin >> x;
//         points.push_back(x);
//     }
    
//     sort(points.begin(), points.end());
//     int min_distance = 0;
//     for (int i = points.size()-1; i > 0; i--) {
//         min_distance += points[i] - points[i-1];
//     }

//     cout << min_distance << endl;

// }


#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int points[3];
    for (int i = 0; i < 3; i++) {
        cin >> points[i];
    }
    
    sort(points, points + 3);
    int min_distance = points[2] - points[0];

    cout << min_distance << endl;

    return 0;
}
