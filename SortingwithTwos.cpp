#include <iostream>
#include <string>
using namespace std;

int main() {
    int test_cases;
    cin >> test_cases;

    while(test_cases--) {
        int array_length;
        cin >> array_length;

        int array_values[array_length];
        for (int i = 0; i < array_length; i++)
            cin >> array_values[i];

        string result = "YES\n";
        for (int index = 1; index < array_length; index++) {
            if (index & (index - 1)) {
                if (array_values[index - 1] > array_values[index]) {
                    result = "NO\n";
                    break;
                }
            }
        }
        cout << result;
    }
    return 0;
}
