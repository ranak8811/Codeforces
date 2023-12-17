#include <iostream>
#include <vector>

using namespace std;


const int M = 1000;
vector<bool> marked(M, false);

void sieve(int n) {
    for (int i = 3; i * i <= n; i += 2) {
        if (marked[i] == false) {
            for (int j = i*i; j <= n; j += i + i) {
                marked[j] = true;
            }
        }
    }
}

int main() {
    int limit;
    cout << "Enter the limit: ";
    cin >> limit;

    sieve(limit);

    cout << "Prime numbers up to " << limit << " are:\n";

    if (limit >= 2) cout << "2 ";

    for (int i = 3; i <= limit; i += 2) {
        if (!marked[i]) cout << i << " ";
    }
    cout << endl;

    return 0;
}