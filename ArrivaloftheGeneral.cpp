#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> heights(n);
    for (int i = 0; i < n; i++) {
        cin >> heights[i];
    }

    int max_height = heights[0];
    int max_index = 0;
    int min_height = heights[0];
    int min_index = 0;

    for (int i = 0; i < n; i++) {
        if (heights[i] > max_height) {
            max_height = heights[i];
            max_index = i;
        }
        if (heights[i] <= min_height) {
            min_height = heights[i];
            min_index = i;
        }
    }

    int swaps_needed = max_index + (n - 1 - min_index);
    if (max_index > min_index) {
        swaps_needed--; // Correct for double-counting the common soldier
    }

    cout << swaps_needed << endl;

    return 0;
}




// #include <iostream>         //how to find left most maximum and right most minimum number from an array
// #include <vector>
// #include <limits>

// using namespace std;

// int main() {

//     vector<int> arr = {10, 10, 58, 31, 63, 40, 76};

//     int maxVal = numeric_limits<int>::min();
//     int minVal = numeric_limits<int>::max();
//     int leftmostMaxIdx = -1;
//     int rightmostMinIdx = -1;

//     for (int i = 0; i < arr.size(); i++) {
//         if (arr[i] > maxVal) {
//             maxVal = arr[i];
//             rightmostMaxIdx = i;
//         }
//         if (arr[i] < minVal) {
//             minVal = arr[i];
//             leftmostMinIdx = i;
//         }
//     }

//     cout << "Leftmost Maximum: " << maxVal << " at index " << rightmostMaxIdx << endl;
//     cout << "Rightmost Minimum: " << minVal << " at index " << leftmostMinIdx << endl;

//     return 0;
// }




// #include <iostream>          //how to find right most maximum and left most minimum number from an array
// #include <vector>
// #include <limits>

// using namespace std;

// int main() {

//     vector<int> arr = {10, 10, 58, 31, 63, 40, 76};

//     int maxVal = numeric_limits<int>::min(); // Initialize maxVal to the smallest possible integer
//     int minVal = numeric_limits<int>::max(); // Initialize minVal to the largest possible integer
//     int rightmostMaxIdx = -1; // Initialize the index of the rightmost maximum to -1
//     int leftmostMinIdx = -1; // Initialize the index of the leftmost minimum to -1

//     for (int i = 0; i < arr.size(); i++) {
//         if (arr[i] > maxVal) {
//             maxVal = arr[i];
//             rightmostMaxIdx = i;
//         }
//         if (arr[i] < minVal) {
//             minVal = arr[i];
//             leftmostMinIdx = i;
//         }
//     }

//     cout << "Rightmost Maximum: " << maxVal << " at index " << rightmostMaxIdx << endl;
//     cout << "Leftmost Minimum: " << minVal << " at index " << leftmostMinIdx << endl;

//     return 0;
// }
