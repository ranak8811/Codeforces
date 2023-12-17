#include <iostream>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    int minutes_left = (4*60) - k;
    int temp = 0;
    int maximum_problems_to_solve = 0;
    for (int i = 1; i < n+1; i++) {
        temp += i*5;
        if (temp > minutes_left) break;
        else {
            maximum_problems_to_solve++;
        }
    }

    cout << maximum_problems_to_solve << endl;
}