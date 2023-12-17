#include <iostream>

using namespace std;

int main() {
    int n, m, a, b;
    cin >> n >> m >> a >> b;

    int costOneRide = n * a;
    int fullTickets = n / m;
    int remainingRides = n % m;
    int costMride = fullTickets * b + min(remainingRides * a, b);
    int minCost = min(costOneRide, costMride);
    
    cout << minCost << endl;

    return 0;
}
