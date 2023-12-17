#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> groupSizes(n);

    // Read the group sizes into the vector
    for (int i = 0; i < n; i++) {
        cin >> groupSizes[i];
    }

    int ones = 0, twos = 0, threes = 0, fours = 0;

    // Count the number of each group size
    for (int size : groupSizes) {
        if (size == 1) ones++;
        else if (size == 2) twos++;
        else if (size == 3) threes++;
        else if (size == 4) fours++;
    }

    // Handle groups of size 1 and 3
    ones -= threes;

    // Handle groups of size 2
    int totalTaxis = twos / 2;
    twos %= 2;

    // Handle remaining groups of size 1
    if (twos > 0) {
        ones -= 2;
        totalTaxis++;
    }

    // Handle remaining groups of size 1
    if (ones > 0) {
        totalTaxis += (ones + 3) / 4; // Add 3 before dividing to ensure correct rounding up
    }

    // Add groups of size 4 and 3 to the total
    totalTaxis += fours + threes;

    cout << totalTaxis << endl;

    return 0;
}



// #include <iostream>
// #include <vector>

// using namespace std;

// int calculateMinTaxis(vector<int> &groupSizes) {
//     int ones = 0, twos = 0, threes = 0, fours = 0;

//     for (int size : groupSizes) {
//         if (size == 1) ones++;
//         else if (size == 2) twos++;
//         else if (size == 3) threes++;
//         else if (size == 4) fours++;
//     }

//     ones -= threes;

//     int halfTwos = twos / 2;
//     int remainderTwos = twos % 2;

//     if (remainderTwos > 0) ones -= 2;

//     int totalTaxis = 0;

//     if (ones > 0) {
//         if (ones % 4 != 0) {
//             totalTaxis = fours + threes + halfTwos + (ones / 4) + 1;
//         } else {
//             totalTaxis = fours + threes + halfTwos + (ones / 4);
//         }
//         totalTaxis += remainderTwos;
//     } else {
//         totalTaxis = fours + threes + halfTwos + remainderTwos;
//     }

//     return totalTaxis;
// }

// int main() {
//     int n;
//     cin >> n;

//     vector<int> groupSizes(n);
//     for (int i = 0; i < n; i++) {
//         cin >> groupSizes[i];
//     }

//     int minTaxis = calculateMinTaxis(groupSizes);
//     cout << minTaxis << endl;

//     return 0;
// }