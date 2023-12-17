#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    int values[] = {a+b*c, a*(b+c), a*b*c, (a+b)*c, a+b+c, a*b*c};

    // int maxNum = *max_element(values, values + 6);
    int maxNum = *max_element(std::begin(values), std::end(values));

    cout << maxNum << endl;
}



// #include <iostream>
// #include <cmath>
// using namespace std;

// int main() {
//     int a, b, c;
//     cin >> a >> b >> c;

//     int values[] = {a + b * c, a * (b + c), a * b * c, (a + b) * c, a+b+c, a*b*c};
//     int maxNum = values[0];

//     for (int i = 1; i < 4; i++) {
//         if (values[i] > maxNum) {
//             maxNum = values[i];
//         }
//     }

//     cout << maxNum << endl;
//     return 0;
// }
