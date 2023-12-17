#include <iostream>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int home[m];
    for (int i = 0; i < m; i++) {
        cin >> home[i];
    }

    long long int min_time = home[0]-1;

    for (int i = 0; i < m-1; i++) {
        if (home[i] > home[i+1]) {
            min_time += n - (home[i] - home[i+1]);
        } 
        else if (home[i] < home[i+1]) {
            min_time += home[i+1] - home[i];
        }
    }

    cout << min_time << endl;
}


// #include <iostream>
// #include <vector>

// using namespace std;

// int main() {
//     int n, m;
//     cin >> n >> m;
    
//     vector<int> tasks(m);
    
//     for (int i = 0; i < m; i++) {
//         cin >> tasks[i];
//     }
    
//     long long time = 0;
//     int currentHouse = 1;
    
//     for (int i = 0; i < m; i++) {
//         if (tasks[i] >= currentHouse) {
//             time += tasks[i] - currentHouse;
//         } else {
//             time += n - currentHouse + tasks[i];
//         }
//         currentHouse = tasks[i];
//     }
    
//     cout << time << endl;
//     return 0;
// }