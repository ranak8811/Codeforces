#include <iostream>
#include <iomanip> // Include the iomanip library for output precision
using namespace std;

int main() {
    int n;
    cin >> n;

    int sum = 0;
    for (int i = 0; i < n; i++) {
        int pi;
        cin >> pi;
        sum += pi;
    }

    double cocktailPercent = static_cast<double>(sum) / n; // Calculate the average
    cout << fixed << setprecision(9) << cocktailPercent << endl; // Set output precision to 9 decimal places

    return 0;
}
