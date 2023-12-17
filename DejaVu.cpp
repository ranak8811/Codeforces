#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int main() {
    int test_cases;
    cin >> test_cases;

    while (test_cases--) {
        int array_length, num_queries;
        cin >> array_length >> num_queries;

        vector<int> arr(array_length);
        for (int &element : arr) {
            cin >> element;
        }

        int min_divisor = INT_MAX;
        for (int i = 0; i < num_queries; ++i) {
            int divisor;
            cin >> divisor;

            if (min_divisor > divisor) {
                min_divisor = divisor;
                for (int &element : arr) {
                    if (!(element % (1 << divisor))) {
                        element += (1 << (divisor - 1));
                    }
                }
            }
        }

        for (int element : arr) {
            cout << element << ' ';
        }
        cout << '\n';
    }

    return 0;
}
