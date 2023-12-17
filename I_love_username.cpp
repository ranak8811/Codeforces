#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int contest[n];
    for (int i = 0; i < n; i++) {
        cin >> contest[i];
    }

    int max_score = contest[0];
    int min_score = contest[0];
    int count = 0;

    for (int i = 1; i < n; i++) {
        if (contest[i] > max_score) {
            max_score = contest[i];
            count++;
        }
        else if (contest[i] < min_score) {
            min_score = contest[i];
            count++;
        }
    }
    cout << count << endl;
}