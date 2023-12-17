#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int crime_count = 0, requirement_count = 0;
    int cl[n];
    for (int i = 0; i < n; i++) {
        cin >> cl[i];

        if (cl[i] == -1) {
            if (requirement_count <= 0) {
                crime_count++;
            }
            else requirement_count--;

        } else requirement_count += cl[i];
    }

    cout << crime_count << endl;
}