#include <iostream>

using namespace std;

int main() {
    int x;
    cin >> x;

    // Calculate the minimum number of steps needed
    int steps = (x + 4) / 5;

    cout << steps << endl;

    return 0;
}


// #include <iostream>

// using namespace std;

// int main() {
//     int x;
//     cin >> x;

//     // Calculate the minimum number of steps needed
//     int steps = 0;

//     // Check if the friend's house is already at point 0
//     if (x == 0) {
//         steps = 0; // No steps needed if already at the destination
//     } else {
//         // Calculate the number of steps based on the position of the friend's house
//         // Each step covers a distance of 5 positions
//         // If the remaining distance is less than 5, a single step will cover it
//         // Otherwise, multiple steps are needed
//         if (x % 5 == 0) {
//             steps = x / 5; // If the distance is divisible by 5, divide by 5 to get the number of steps
//         } else {
//             steps = (x / 5) + 1; // If not divisible by 5, divide by 5 and add 1 to account for the remaining distance
//         }
//     }

//     cout << steps << endl;

//     return 0;
// }





// #include <iostream>

// using namespace std;

// int main() {            // Aita vul ans dey on test case 5🫠
//     int x, s;
//     cin >> x;

//     if (x > 5) s = (x / 5) + 1;
//     else s = 1;

//     cout << s << endl;
//     return 0;
// }